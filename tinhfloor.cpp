#include<bits/stdc++.h>

using namespace std;

 
#define ll long long
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
 

int main()
{
 
    int t = 1, n, idx;
    cin >> t;
    ll x;
    while(t--)
    {
        cin >> n >> x;
        vll v;
        v.resize(n);
        for(ll &i : v) cin >> i;
        idx = lower_bound(all(v), x) - v.begin();
        if(v[idx] != x) --idx;
        if(idx > 0) cout << idx + 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}
