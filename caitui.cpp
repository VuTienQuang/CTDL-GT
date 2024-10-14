#include<bits/stdc++.h>

using namespace std;

 #define ll long long 
 #define fi first
#define se second
ll n, m, res;
ll dp[1005][1005];
pair<ll, ll> a[1005];

void solve()
{
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            if(j < a[i].fi) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i].fi] + a[i].se);
            res = max(res, dp[i][j]);
        }
    }
}

int main()
{
    
    int t = 1;
    cin >> t;
    while(t--)
    {
        res = 0;
        cin >> n >> m;
        for(int i = 1; i <= n; ++i) cin >> a[i].fi;
        for(int i = 1; i <= n; ++i) cin >> a[i].se;
        solve();
        cout << res << endl;
    }
    return 0;
}

