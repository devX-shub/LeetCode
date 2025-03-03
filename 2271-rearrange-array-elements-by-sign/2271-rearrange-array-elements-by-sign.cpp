class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        // int posCounter = -1;
        // int negCounter = -1;
        // while(i < nums.size())
        // {
        //     if(posCounter != -1 && negCounter != -1)
        //     {
        //         break;
        //     }
        //     if(posCounter == -1 && nums[i] > 0)
        //     {
        //         posCounter = i;
        //         i++;
        //         continue;
        //     }
        //     if(negCounter == -1 && nums[i] < 0)
        //     {
        //         negCounter = i;
        //         i++;
        //         continue;
        //     }
        // }
        vector<int> posValue;
        vector<int> negValue;
        for(int i = 0; i < n ;i++)
        {
            if(nums[i] > 0)
            {
                posValue.push_back(nums[i]);
            }
            else{
                negValue.push_back(nums[i]);
            }
        }
        int flag = 0;
        int j = 0;
        int k = 0;
        for(int i = 0 ; i < n; i++)
        {
            if(flag == 0 && j < posValue.size())
            {
                ans.push_back(posValue[j]);
                j++;
                flag = 1;
            }else if(flag == 1 && k < negValue.size())
            {
                ans.push_back(negValue[k]);
                k++;
                flag = 0;
            }
        }
        // while(j < posValue.size())
        // {
        //     ans.push_back(posValue[j]);
        //     j++;
        // }
        // while(k < negValue.size())
        // {
        //     ans.push_back(negValue[k]);
        //     k++;
        // }
        return ans;
    }
};