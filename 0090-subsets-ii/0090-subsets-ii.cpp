class Solution {
public:
    void generateSubsets(set<vector<int>> &ans,vector<int>& nums,int start,int end,vector<int>& temp)
    {
        if(start == nums.size())
            {
                sort(temp.begin(),temp.end());
                ans.insert(temp);
                return;
            }
        ans.insert(temp);

            temp.push_back(nums[start]);
            generateSubsets(ans,nums,start+1,end,temp);
            temp.pop_back();
            generateSubsets(ans,nums,start+1,end,temp);
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