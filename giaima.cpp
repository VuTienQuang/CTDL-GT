#include<bits/stdc++.h>

using namespace std;

 
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long


int main()
{
   
    int t = 1;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        if(s[0] == '0')
        {
            cout << 0 << endl;
            continue;
        }
        int dp[1005] = {};
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= s.sz; ++i)
        {
            if(s[i - 1] > '0') dp[i] = dp[i - 1];
            if(s[i - 2] == '1' or (s[i - 2] == '2' && s[i - 1] < '7')) dp[i] += dp[i - 2];
        }
        cout << dp[s.sz] << endl;
    }
    return 0;
}
