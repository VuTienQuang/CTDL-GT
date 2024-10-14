#include<bits/stdc++.h>

using namespace std;

 
#define ll long long
 
#define vll vector<ll>
 
 
int main()
{
   
    int t = 1, n, k, x;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        unordered_map<ll, ll> f;
        vll v(n);
        ll cnt = 0;
        for(ll &i : v)
        {
            cin >> i;
            ++f[i];
        }
        if((k & 1) ^ 1 and f[k >> 1])
        {
            cnt += f[k >> 1] * (f[k >> 1] - 1) >> 1;
            f[k >> 1] = 0;
        }
        for(ll i : v)
        {
            if(f[i])
            {
                cnt += f[i] * f[k - i];
                f[i] = f[k - i] = 0;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
