class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> np = new HashMap<>();
        int n = nums.length;
        for(int i = 0; i < n; i++)
        {
            int comp = target - nums[i];
            if(np.containsKey(comp))
            {
                return new int[]{np.get(comp),i};
            }
            np.put(nums[i],i);
        }
        return new int[]{};
    }
}