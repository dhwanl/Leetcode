class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int size = nums.size();
        
        int min = nums[0];
        // find minimum 
        // i.e. find i in i < j < k
        for(int i = 1; i < size; i++)
        {
           if(min > nums[i])
               min = nums[i];
        }
    
        stack<int> sta;
        
        // find the second largest one, j
        for(int i = size - 1; i >= 0; i--)
        {
            // find k and compare j
            if(nums[i] < min)
                return true;
            
            // change min to j
            while(!sta.empty() && nums[i] > sta.top())
            {
                min = sta.top();
                sta.pop();
            }
            
            // if stack is empty, then put a temporary element into stack
            sta.push(nums[i]);
        }
        
        return false;
    }
};