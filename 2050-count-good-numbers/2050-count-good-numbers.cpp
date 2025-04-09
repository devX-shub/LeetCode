class Solution {
public:

    // long long callFunc(long long n)
    // {
    //     if(n == 0)
    //     {
    //         return 1;
    //     }
    //     if(n%2 == 1)
    //     {
    //        return (5 * callFunc(n - 1)) % 1000000007;
    //     }
    //     else{
    //         return (4 * callFunc(n - 1)) % 1000000007;
    //     }
    // }
    #define MOD 1000000007

long long power(long long base, long long exp) {
    long long result = 1;
    base %= MOD;

    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }

    return result;
}
    int countGoodNumbers(long long n) {
        long long evenPositions = (n + 1) / 2;
    long long oddPositions = n / 2;
    
    long long evenChoices = power(5, evenPositions);
    long long oddChoices = power(4, oddPositions);
    
    return (evenChoices * oddChoices) % MOD;

    }
};