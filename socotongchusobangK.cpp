#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t, n, k;
    cin >> t;
    const int mod = 1e9 + 7;
    int dp[105][50005] = {};
    for(int i = 1; i <= 9; ++i)
        dp[1][i] = 1;
    for(int i = 1; i <= 100; ++i)
        for(int j = 0; j <= 9; ++j)
            for(int z = j; z <= 50000; ++z)
                dp[i][z] = (dp[i][z] + dp[i - 1][z - j]) % mod;
    while(t--)
    {
        cin >> n >> k;
        cout << dp[n][k] << endl;
    }
    return 0;
}
