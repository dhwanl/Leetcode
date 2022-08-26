class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        /*
        Set properties
        1. Storing order - The set stores the elements in sorted order
        2. Value Characteristics - All elelements in a set have unique values.
        3. Value Nature - The value of the element cannot be modified once it is added 
                          to the set, though it is possible to remove and then add
                          the modified value of that element.
                          Thus, the values are immutuable.
        4. Search Techniqe - Sets follow the Binary search tree implementation.
        5. Arraging order - The values in a set are unindexed.
        
        Note: To store the elements in an unsorted(random) order, 
              unordered_set() can be used
        */
        
        return nums.size() > set<int>(nums.begin(), nums.end()).size();
    }
};