class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int posInd = 0; int ngeInd = 1;
        for(int i = 0; i < n ;i++)
        {
            if(nums[i] > 0)
            {
                ans[posInd] = nums[i];
                posInd +=2;
            }
            else{
                ans[ngeInd] = nums[i];
                ngeInd += 2;
            }
        }
        
        return ans;
    }
};