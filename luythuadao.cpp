#include<bits/stdc++.h>

using namespace std;

 
 
#define ll long long
 

inline ll rev(ll n)
{
    ll res = 0;
    while(n)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

const ll mod = 1e9 + 7;

inline ll binPow(ll n, ll p)
{
    if(p == 1) return n;
    ll res = binPow(n, p >> 1) % mod;
    res = (res * res) % mod;
    if(p & 1) res = (res * n) % mod;
    return res % mod;
}

int main()
{
    
    int t = 1;
    ll n, p;
    cin >> t;
    while(t--)
    {
        cin >> n;
        p = rev(n);
        cout << binPow(n, p) << endl;
    }
    return 0;
}
