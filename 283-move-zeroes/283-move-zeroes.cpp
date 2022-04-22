class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int size, temp;
        
        size = nums.size() - 1;
        
        for(int i = 0; i <= size; i++)
        {
            for(int j = i + 1; j <= size; j++)
            {
                if(nums[i] == 0)
                {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
       
    }
};