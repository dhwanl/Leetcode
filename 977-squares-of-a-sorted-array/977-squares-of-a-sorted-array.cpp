class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
        int size, head, tail, tempIndex;
        
        size = nums.size();
        
        // make two pointers for the given vector
        head = 0;
        tail = size - 1;
        
        // a pointer for new vector;
        tempIndex = tail;
        
        // declare a new vecotr
        vector<int> temp(size);
        
        for(; tempIndex >= 0;)
        {
            if(abs(nums[head]) > abs(nums[tail]))
            {
                // square nums[head] if nums[head] > nums[tail]
                nums[head] = nums[head] * nums[head];
                temp[tempIndex--] = nums[head++];
                
            }else{
                
                // square nums[tail] if nums[tail] > nums[head]
                nums[tail] = nums[tail] * nums[tail];
                temp[tempIndex--] = nums[tail--];
            }
        }
        
        
        return temp;
    }
};