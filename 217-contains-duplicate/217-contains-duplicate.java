class Solution {
    public boolean containsDuplicate(int[] nums) {
       
        /*
        For the final keyword, it won't necessarily improve the performance. 
        Guys from Sun declare that the JVM can detect and indicate final 
        even when developer does not specify it. 
        But for some cases, especially for some JVMs, final does improve performance, 
        for example, string concatenation will be done during compile time 
        thus improve performance.
        
        For short, you should use final for clearer design/code purpose,
        not for performance purpose.
        */
        
        /*
        Set: interface
        HashSet: implementation
        TreeSet: implementation [sorted]
        */
        final Set<Integer> hashSet = new HashSet<Integer>();
        
        for(int num : nums){
            
            if(hashSet.contains(num))
                return true;
            
            hashSet.add(num);
        }
        
        return false;
    }      
}