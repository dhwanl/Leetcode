class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i : nums1){
            // provide key whose value has to be obtained
            // and default value for the key if there is no value
            int freq = map.getOrDefault(i, 0);
            map.put(i, freq + 1);
        }
        
        ArrayList<Integer> list = new ArrayList<>();
        for(int i : nums2){
            if(map.get(i) != null && map.get(i) > 0){
                list.add(i);
                map.put(i, map.get(i) - 1);
            }
        }
        
        int[] res = new int[list.size()];
        for(int i = 0; i < list.size(); i++){
            res[i] = list.get(i);
        }
        
        return res;
    }
}