class Solution {
public:
    string removeDuplicates(string s, int k) {

        /*
            1. use a stack to store char, when there are k same characters
            2. delete them.
        */
        string res = "";
        stack<pair<char, int>> sta1;
        
        for(char c : s)
        {
            if(!sta1.size() || sta1.top().first != c)
                sta1.push({c, 1});
            else{
                
                sta1.push({c, sta1.top().second + 1});
                
                if(sta1.top().second >= k)
                {
                    for(int i = 0; i < k; i++)
                        sta1.pop();
                }
            }
            
            
        }
        
        while(sta1.size())
        {
            res += sta1.top().first;
            sta1.pop();
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};