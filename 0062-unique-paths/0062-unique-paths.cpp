class Solution {
public:
/*
    Brute force 
    int countPath(int m,int n, int i ,int j)
    {
        if(i == m-1 && j == n - 1)
            return 1;
        if(i >= m || j >= n)
            return 0;
        return countPath(m,n,i+1,j) + countPath(m,n,i,j+1);
    }
    
    int uniruePaths(int m,int n)
    {
        int i = 0, j = 0;
        return countPath(m,n,i,j);
    }
*/
//Most optimal solution.
    int uniquePaths(int m, int n) {
        int N = m + n - 2;
        int r = m-1;
        double res = 1;
        for(int i = 1; i <= m-1;i++)
        {
            res = res * (N - r + i)/i;
        }
        return (int)res;
    }
};
