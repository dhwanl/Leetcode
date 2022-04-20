class Solution {
public:
    bool isPalindrome(int x) {
        
        //change int to string
        string s = to_string(x);
        
        //scan all characters
        for(int i = 0, j = s.length() - 1; i <= j; i++, j--)
        {
           if(s[i] != s[j]) //if each elements is different, return false
               return false;
        }
        
        return true; //else, return true
    }
};