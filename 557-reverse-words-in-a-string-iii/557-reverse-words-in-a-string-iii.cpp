class Solution {
public:
    string reverseWords(string s) {
        
    
        /*
            1. make another string to save string in reverse
            2. use two pointers
            3. a swap function
        */
        
        string newStr1 = "";
        string newStr2 = "";
        
            
            
        for(int i = 0; i <= s.length(); i++)
        {

            if(s[i] == ' ' || i == s.length())
            {
                swapString(newStr1);
                
                if(i == s.length())
                    newStr2 += newStr1;
                else
                    newStr2 += newStr1 + s[i];
                
                newStr1 = "";
            
            }else{
                
                newStr1 += s[i];
            }
           
        }
        
        return newStr2;
    }
    
private:
    string swapString(string& s)
    {
        int ptr1 = 0;
        int ptr2 = s.length() - 1;
        char temp;
        
        while(ptr1 <= ptr2)
        {
            temp = s[ptr1];
            s[ptr1] = s[ptr2];
            s[ptr2] = temp;
            
            ptr1++;
            ptr2--;
        }
        
    
    return s;
    }
};