class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        /*
Solution using HashMap

    We need to find 2 numbers a, b so that a + b = target.
    We need a HashMap datastructure to store elements in the past, let name it map.
    The idea is that we iterate b as each element in nums, 
    we check if we found a (where a =    target - b) in the past.
    If a exists in map then we already found 2 numbers a and b, so that a + b = target, 
    just output their indices.
    Else add b to the map.

Complexity

  Time: O(N), where N <= 10^4 is number of elements in the array nums.
  Space: O(N)
        */
        // Stores the data in (Key, Value) pairs
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        
        for(int i = 0; i < nums.length; i++){
            
            int b = nums[i], a = target - b;
            
            if(map.containsKey(a)) // Found pair of (a, b), so that a + b = target
                return new int[]{map.get(a), i};
            
            map.put(b, i);
        }
        
        return new int[]{};
    }
}