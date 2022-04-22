class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      
        int ptr1, ptr2, temp, size;
        
        ptr1 = 0;
        ptr2 = 1;
        
        size = nums.size();
        
        if(size == 1) return;
        
        for(; ptr2 < size;)
        {
            
            if(nums[ptr1] != 0) ptr1++;
            if(nums[ptr2] == 0) ptr2++;
            else{
                
                temp = nums[ptr1];
                nums[ptr1] = nums[ptr2];
                nums[ptr2] = temp;
                
                ptr2++;
            }
                
        }
        
    }
        
    };