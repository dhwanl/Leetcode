class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        /*
            from hints
                1. use hash table, an array of size 26
                2. both strings must have same character frequencies,
                    if one is permutation of another
                3. sort the string and then compare
        */
        
        // two strings need two vectors to check frequencies
        vector<int> firstStr(26), secondStr(26);
        
        // change characters in a string to integer
        for(char c : s1)
            firstStr[c - 'a']++; // put it into vecotr
        
        // read s2
        for(int i = 0; i < s2.size(); i++)
        {
             // change each character in s2 to integer for index numbers and increase
            secondStr[s2[i] - 'a']++;
            
            // make s2 size same as the s1
            // remove the element ahead as i increase
            if(i >= s1.size())
                secondStr[s2[i - s1.size()] - 'a']--;
            
            // if they have same indexes and values,
            // they have the same frequencies
            if(firstStr == secondStr)
                return true;
        }
        
        return false;
    }
};