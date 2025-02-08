class Solution {
public:
    void generateSubsets(set<vector<int>> &ans,vector<int>& nums,int start,vector<int> temp)
    {
        if(start == nums.size())
            {
                sort(temp.begin(),temp.end());
                ans.insert(temp);
                return;
            }
            temp.push_back(nums[start]);
            generateSubsets(ans,nums,start+1,temp);
            temp.pop_back();
            generateSubsets(ans,nums,start+1,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> ans;
        vector<int> temp;
        generateSubsets(ans,nums,0,temp);
        vector<vector<int>> res;
        for(auto it : ans)
        {
            res.push_back(it);
        }
        return res;
    }
};