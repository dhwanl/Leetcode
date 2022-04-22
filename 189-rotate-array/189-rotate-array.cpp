class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int size = nums.size();
        vector<int> v(size);
        
        for(int i = 0; i < size; i++)
            v[(i + k) % size] = nums[i];
        
        for(int i = 0; i < size; i++)
            nums[i] = v[i];
    }   
    
};