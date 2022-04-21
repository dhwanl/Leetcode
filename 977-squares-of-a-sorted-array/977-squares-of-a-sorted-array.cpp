class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
        int size, head, tail, tempIndex;
        
        size = nums.size();
        head = 0;
        tail = size - 1;
        tempIndex = tail;
        
        vector<int> temp(size);
        
        for(; tempIndex >= 0;)
        {
            if(abs(nums[head]) > abs(nums[tail]))
            {
                nums[head] = nums[head] * nums[head];
                temp[tempIndex--] = nums[head++];
                
            }else{
                
                nums[tail] = nums[tail] * nums[tail];
                temp[tempIndex--] = nums[tail--];
            }
        }
        
        
        return temp;
    }
};