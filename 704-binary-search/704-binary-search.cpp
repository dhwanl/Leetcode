class Solution {
public:
    int search(vector<int>& nums, int target) {
        
       // read all elements in vector and compare it to target
       for(int i = 0; i < nums.size(); i++)
       {
           // if nums[i] == target, then return the index number
           if(nums[i] == target)
             return i;
       }
        
        // if fail, then return -1
        return -1;
    }
};