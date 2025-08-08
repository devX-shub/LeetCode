class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sumLeft = 0;
        int sumRight = 0;
        int n = cardPoints.size();
        for(int i = 0; i < k;i++)
        {
            sumLeft += cardPoints[i];
        }
        int result = sumLeft;
        for(int i = 0; i < k; i++)
        {
            sumLeft -= cardPoints[k-i-1];
            sumRight += cardPoints[n-i-1];
            result = max(result,sumRight+sumLeft);
        }
        return result;
    }
};