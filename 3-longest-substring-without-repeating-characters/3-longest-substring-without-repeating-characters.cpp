class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int ptr1, ptr2, res;
        
        ptr1 = ptr2 = res = 0;
        
        // the maximum of the extended ascii table is 256
        // can be used char if it is in ascii table
        int counts[256] = {};
        
        while(ptr2 < s.length())
        {
            counts[s[ptr2]]++; // char can be used instead of index number
            
            while(counts[s[ptr2]] > 1)
            {
                counts[s[ptr1]]--;
                ptr1++;
            }

            res = max(res, ptr2 - ptr1 + 1);
            ptr2++; 
            
        }
        
        return res;
    }
};