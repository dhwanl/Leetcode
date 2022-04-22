class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        // make a new vector for order
        int size = nums.size();
        vector<int> v(size);
        
        // i.e 3 % 7 = 3 4 % 7 = 4 etc.
        for(int i = 0; i < size; i++)
            v[(i + k) % size] = nums[i];
        
        
        // copy the ordered vector to the original vector
        for(int i = 0; i < size; i++)
            nums[i] = v[i];
    }   
    
};