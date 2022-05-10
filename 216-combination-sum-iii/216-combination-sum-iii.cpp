class Solution {
public:
    
    /*
        1. using vector
        2. backtracking -> recursion
    */
    
    // declare vector to return the answer
    vector<vector<int>> ans;
    
    // function for backtracking
    void generate(int k, int n, vector<int> &cur, int startingNum)
    {
        // first base case when there is nothing or size become bigger than k
        if(n < 0 || cur.size() > k) return;
        
        // second base case when find the anser
        if(n == 0 && cur.size() == k)
        {
            ans.push_back(cur);
            return;
        }
        
        for(int i = startingNum; i <= 9; i++)
        {
            // fix a number
            cur.push_back(i);
            generate(k, n - i, cur, i + 1); // call function for next number
            cur.pop_back(); // remove the fixed number when it is done
        }
    }
    
    // main function
    vector<vector<int>> combinationSum3(int k, int n) {
     
        // temp vector
        vector<int> cur;
        
        // call function
        // starting number is 1 because numbers are 1 to 9
        generate(k, n, cur, 1);
        
        // return answer
        return ans;
    }
};