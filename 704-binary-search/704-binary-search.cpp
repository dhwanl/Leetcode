class Solution {
public:
    int search(vector<int>& nums, int target) {
       /* 
       // read all elements in vector and compare it to target
       for(int i = 0; i < nums.size(); i++)
       {
           // if nums[i] == target, then return the index number
           if(nums[i] == target)
             return i;
       }
        
        // if fail, then return -1
        return -1;
        */
        return binarySearch(nums, target, 0, nums.size() - 1);
    
    }
    
private:
    int binarySearch(vector<int>& nums, int target, int low, int high)
    {
        
        if(low <= high)
        {
            int mid = low + (high - low) / 2;
            
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                return binarySearch(nums, target, mid + 1, high);
            else
                return binarySearch(nums, target, low, mid - 1);
        }
        
        return -1;
    }
    
};