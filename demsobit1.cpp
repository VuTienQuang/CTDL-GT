#include<bits/stdc++.h>

using namespace std;
#define ll long long
ll a[55];

inline int Find(int idx, ll n, ll i)
{
    if(idx == 1) return n & 1;
    ll tmp = a[idx - 1];
    if(i == tmp + 1) return n & 1;
    if(i < tmp + 1) return Find(idx - 1, n >> 1, i);
    return Find(idx - 1, n >> 1, i - tmp - 1);
}

int main()
{
    
    int t = 1;
    ll n, l, r, tmp;
    cin >> t;
    while(t--)
    {
        cin >> n >> l >> r;
        memset(a, 0, sizeof(a));
        a[1] = 1;
        tmp = n;
        n >>= 1;
        int idx = 2;
        while(n > 0)
        {
            a[idx] = (a[idx - 1] << 1) + 1;
            n >>= 1;
            ++idx;
        }
        --idx;
        ll res = 0;
        for(ll i = l; i <= r; ++i) res += Find(idx, tmp, i);
        cout << res << endl;
    }
    return 0;
}
