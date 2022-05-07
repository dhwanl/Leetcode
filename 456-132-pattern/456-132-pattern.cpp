class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int size = nums.size();
        int min = nums[0];
        int max;
        
        for(int i = 1; i < size; i++)
        {
           if(min > nums[i])
               min = nums[i];
        }
        
        stack<int> sta;
        
        for(int i = size - 1; i >= 0; i--)
        {
            if(nums[i] < min)
                return true;
            
            while(!sta.empty() && nums[i] > sta.top())
            {
                min = sta.top();
                sta.pop();
            }
            
            sta.push(nums[i]);
        }
        
        return false;
    }
};