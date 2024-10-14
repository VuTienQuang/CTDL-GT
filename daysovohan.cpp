#include<bits/stdc++.h>

using namespace std;

#define ll long long 
unordered_map<ll, ll> F;
int mod = 1e9 + 7;

ll fibo(ll n)
{
    if(F[n]) return F[n];
    ll k = n >> 1;
    if(n & 1) return F[n] = (fibo(k) * fibo(k + 1) + fibo(k - 1) * fibo(k)) % mod;
    return F[n] = (fibo(k) * fibo(k) + fibo(k - 1) * fibo(k - 1)) % mod;
}

int main()
{
    int t, n;
    F[0] = F[1] = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(!n) cout << 0 << endl;
        else cout << fibo(n - 1) << endl;
    }
    return 0;
}
