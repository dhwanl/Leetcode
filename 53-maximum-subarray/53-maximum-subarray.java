class Solution {
    public int maxSubArray(int[] nums) {
    
        
        /*
        Trace of the example test case ([-2,1,-3,4,-1,2,1,-5,4]):
        [-2,1,-3,4,-1,2,1,-5,4]
        MEH = -2 
        MSF = -2

        MEH = Max(-2+1,1) = 1
        MSF = Max(-2, 1) = 1

        MEH = Max(1-3,-3) = -2
        MSF = Max(1, -2) = 1

        MEH = Max(-2+4, 4) = 4
        MSF = Max(1, 4) = 4

        MEH = Max(4-1,-1) = 3
        MSF = Max(4, 3) = 4

        MEH = Max(3+2,2) = 5
        MSF = Max(4, 5) = 5

        MEH = Max(5+1,1) = 6
        MSF = Max(5,6) = 6

        MEH = Max(6-5, -5) = 1
        MSF = Max(6, 1) = 6

        MEH = Max(1+4, 4) = 4
        MSF = Max(6, 4) = 6
        */
        
        int maxSoFar = nums[0]; // a current element
        int maxEndingHere = nums[0]; // a total sum
        
        for(int i = 1; i < nums.length; i++){
            
            // if maxEndingHere is a negative, then this code calculate the sum again
            maxEndingHere = Math.max(maxEndingHere + nums[i], nums[i]);
            maxSoFar = Math.max(maxSoFar, maxEndingHere);
            
        }
        
         return maxSoFar;
    }
}