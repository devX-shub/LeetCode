class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //naive code;
        int start = 0; int end = numbers.size()-1;
        while(start < end)
        {
            int sum = numbers[start] + numbers[end];
            if(sum == target)
            {
                return {start+1,end+1};
            }
            else if(sum < target)
            {
                start++;
            }
            else{
                end--;
            }
        }
        return {-1,-1};
    }
};