class Solution {
public:
    void generateSubsets(set<vector<int>> &ans,vector<int>& nums,int start,int end,vector<int>& temp)
    {
        ans.insert(temp);
        for(int i = start; i < end;i++)
        {
            temp.push_back(nums[i]);
            generateSubsets(ans,nums,i+1,end,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        generateSubsets(ans,nums,0,n,temp);
        vector<vector<int>> res;
        for(auto it : ans)
        {
            res.push_back(it);
        }
        return res;
    }
};