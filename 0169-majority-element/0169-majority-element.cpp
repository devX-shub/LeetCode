class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int currEle;
        for(int i = 0; i < nums.size();i++)
        {
            if(count == 0)
            {
                count = 1;
                currEle = nums[i];
            }
            else if(currEle == nums[i])
            {
                count++;
            }
            else{
                count--;
            }
        }
        return currEle;
    }
};