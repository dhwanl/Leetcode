class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        // call a helper function
        return binarySearch(nums, target, 0, nums.size() - 1);
    }

// use the helper function to use recursion
private:
    int binarySearch(vector<int>& nums, int target, int low, int high)
    {
        // if low > high, then it fail to find the target in the vector
        if(low <= high)
        {
            // find the midpoint to compare to target
            int mid = (low + high) / 2;
            
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                return binarySearch(nums, target, mid + 1, high);
            else if(nums[mid] > target)
                return binarySearch(nums, target, low, mid - 1);
        }
        
          return -1;
        
    }
};