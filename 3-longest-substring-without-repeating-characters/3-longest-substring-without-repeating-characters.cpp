class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        /*
            SLIDINING WINDOW - TIME COMPLEXITY O(2n);
                               SPACE COMPLEXITY O(m) // size of array
        */
        
        int ptr1, ptr2, res;
        
        ptr1 = ptr2 = res = 0; // pointers and return value
        
        // the maximum of the extended ascii table is 256
        // can be used char if it is in ascii table
        int counts[256] = {}; // array to keep the occurance of all the characters
        
        // iterate over the string till the second pointer reaches the end of the string
        while(ptr2 < s.length())
        {
            // increse the count of the character present in the second ptr 
            // char can be used instead of index number
            counts[s[ptr2]]++;
            
            
            // if the occurence become more than 1 means the char is repeated
            while(counts[s[ptr2]] > 1) 
            {
                // reduce the occurence of the character 
                //as it is also present ahead in the string 
                counts[s[ptr1]]--;
                
                // contraction of the present window 
                // till the occurence of the 't' char becomes 1
                ptr1++;
            }

            // As the index starts from 0, and will be (right pointer-left pointer + 1)
            res = max(res, ptr2 - ptr1 + 1);
            ptr2++; // increase the second ptr
            
        }
        
        return res;
    }
};