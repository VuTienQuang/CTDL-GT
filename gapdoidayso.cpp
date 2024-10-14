#include<bits/stdc++.h>

using namespace std;

 
#define ll long long


inline ll binPow(ll a, ll b)
{
    if(!b) return 1;
    ll res = binPow(2, b >> 1);
    res = res * res;
    if(b & 1) res = res << 1;
    return res;
}

inline ll findNum(ll n, ll k)
{
    ll x = binPow(2, n - 1);
    if(k == x) return n;
    if(k < x) return findNum(n - 1, k);
    return findNum(n - 1, k - x);
}

int main()
{
    
    int t = 1;
    ll n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << findNum(n, k) << endl;
    }
    return 0;
}
