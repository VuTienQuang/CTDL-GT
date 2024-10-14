#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;
int main()
{
    int t = 1, n, s;
    //cin >> t;
    while(t--)
    {
        cin >> s >> n;
        int a[n + 1];
        for(int i = 1; i <= n; ++i) cin >> a[i];
        vector<vector<int>> dp(n + 1, vi(s + 1, 0));
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= s; ++j)
                if(a[i] < j) dp[i][j] = max(dp[i - 1][j - a[i]] + a[i], dp[i - 1][j]);
                else dp[i][j] = dp[i - 1][j];
        cout << dp[n][s];
    }
    return 0;
}
