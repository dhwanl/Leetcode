class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        // declare variables to use the binary search
        int low, high, mid;
        low = 0;
        high = nums.size() - 1;
        
        while(low <= high)
        {
            // low + (high - low) is preferable because low + high cannot handle huge numbers
            mid = low + (high - low) / 2;
            
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                low = mid + 1;
            else if(nums[mid] > target)
                high = mid - 1;
        }
  
        return low; // better solution
        
    }
};