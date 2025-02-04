class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return 0;
        sort(nums.begin(),nums.end());
        int largest = INT_MIN;
        int maxCount = 1;
        int count = 0;
        for(int i = 0 ; i < nums.size();i++)
        {
            if(nums[i]-1 == largest)
            {
                largest = nums[i];
                count += 1;
            }else if(nums[i] != largest)
            {
                largest = nums[i];
                count = 1;
            }
            maxCount = max(maxCount,count);
        }
        return maxCount;
    }
};