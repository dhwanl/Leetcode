class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
      
        int tail1 = m - 1, tail2 = n -1, size = m + n - 1;
        
        for(;tail1 >= 0 && tail2 >= 0;){
            
            nums1[size] = (nums1[tail1] > nums2[tail2]) ? nums1[tail1--] : nums2[tail2--];
            size--;
        }
        
        // Only need to combine with remaining num2, if any
        while(tail2 >= 0) {
            
            nums1[size--] = nums2[tail2--];
        }
            
        
    }
}