class Solution {
public:
    string reverseWords(string s) {
        
    
        /*
            1. make another string to save string in reverse
            2. use two pointers
            3. a swap function
        */
        
        // make two empty strings
        string newStr1 = ""; // to reverse each string
        string newStr2 = ""; // to return final string
        
        // i <= s.length() to include the last element
        // in the sequence, every element can be included before whitespace,
        // but in the last no white space, 
        // so we should make the condition that include last element
        for(int i = 0; i <= s.length(); i++)
        {

            if(s[i] == ' ' || i == s.length())
            {
                swapString(newStr1); // call a function to swap
                
                // use if-statement not to print out whitespace at the end
                if(i == s.length())
                    newStr2 += newStr1;
                else
                    newStr2 += newStr1 + s[i];
                
                // make temporary string to default
                newStr1 = "";
            
            }else{
                
                newStr1 += s[i];
            }
           
        }
        
        // return string
        return newStr2;
    }
    
private:
    string swapString(string& s)
    {
        // use two pointers
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
        
    // return value
    return s;
    }
};