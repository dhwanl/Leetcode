class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      
        // declare two points and temp to change elements
        int ptr1, ptr2, temp, size;
        
        // starts from 0 and 1 to compare
        ptr1 = 0;
        ptr2 = 1;
        
        size = nums.size();
        
        // stop the function when there is no comparison
        if(size == 1) return;
        
        for(; ptr2 < size;)
        {
            
            // find zero and non-zero numbers and exchange it
            if(nums[ptr1] != 0) ptr1++; // increase ptr1 when it is not 0
            if(nums[ptr2] == 0) ptr2++; // increase ptr2 when it is 0
            else{
                
                // change elements
                temp = nums[ptr1];
                nums[ptr1] = nums[ptr2];
                nums[ptr2] = temp;
                
                ptr2++; // increase ptr2 to move on
            }
                
        }
        
    }
        
    };