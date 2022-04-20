class Solution {
public:
    int romanToInt(string s) {
        
        int sum = 0;
        
        //read string and compare it to roman numbers
        //use for-loop to scan all chars in string
        for(int i = 0; i < s.length(); i++)
        {
            // set conditions
            // IV = 4 and IX = 9
            if(s[i] == 'I' && s[i + 1] != 'V' && s[i + 1] != 'X')
            {
                sum += 1;
                
            }else if(s[i] == 'I' && s[i + 1] == 'V'){
             
                sum += 4;
                i++;
                
            }else if(s[i] == 'I' && s[i + 1] == 'X'){
                
                sum += 9;
                i++;
                
            }else if(s[i] == 'V'){
                
                sum += 5;
                
            // XL = 40 and XC = 90
            }else if(s[i] == 'X' && s[i + 1] != 'L' && s[i + 1] != 'C'){
                
                sum += 10;
                
            }else if(s[i] == 'X' && s[i + 1] == 'L'){
             
                sum += 40;
                i++;
                
            }else if(s[i] == 'X' && s[i + 1] == 'C'){
                
                sum += 90;
                i++;
                
            }else if(s[i] == 'L'){
                
                sum += 50;
                
            //CD = 400 and CM = 900
            }else if(s[i] == 'C' && s[i + 1] != 'D' && s[i + 1] != 'M'){
                
                sum += 100;
                
            }else if(s[i] == 'C' && s[i + 1] == 'D'){
                
                sum += 400;
                i++;
                
            }else if(s[i] == 'C' && s[i + 1] == 'M'){
                
                sum += 900;
                i++;
                
            }else if(s[i] == 'D')
            {
                sum += 500;
                
            }else if(s[i] == 'M'){
                
                sum += 1000;
            }
            
        }
        
        return sum;
    }
};