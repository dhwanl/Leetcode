class Solution {
public:
    string removeDuplicates(string s, int k) {

        /*
            1. use a stack to store char, when there are k same characters
                to make it more efficient, use a pair to store the value and the count
                of each character
            2. delete them.
        */
        
        string res = ""; // declare string to return
        stack<pair<char, int>> sta1; // use a stack with pair
        
        for(char c : s) // iterate until string is empty
        {
            // add new value to stack
            // when either sta1 is empty or there is not the same value 
            if(!sta1.size() || sta1.top().first != c)
                sta1.push({c, 1});
            else{
                
                sta1.push({c, sta1.top().second + 1}); // increase count
                
                if(sta1.top().second >= k)
                {
                    for(int i = 0; i < k; i++) // remove the value that is repeted kth times
                        sta1.pop();
                }
            }
            
            
        }
        
        // move stack into string
        // remember stack is LILO
        while(sta1.size())
        {
            res += sta1.top().first;
            sta1.pop();
        }
        
        reverse(res.begin(), res.end()); // reverse string
        
        return res; // return strinng
    }
};