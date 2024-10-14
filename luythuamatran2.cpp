#include<bits/stdc++.h>

using namespace std;

 #define ll long long

ll mod = 1e9 + 7;
int n, k;

struct matrix
{
    ll m[15][15];
    
    matrix operator * (matrix a)
    {
        matrix res, b = *this;
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                res.m[i][j] = 0;
                for(int z = 0; z < n; ++z)
                {
                    res.m[i][j] += (a.m[i][z] * b.m[z][j]) % mod;
                    res.m[i][j] %= mod;
                }
            }
        }
        return res;
    }
};

inline matrix binPow(matrix a, int b)
{
    if(b == 1) return a;
    matrix res = binPow(a, b >> 1);
    res = res * res;
    if(b & 1) res = res * a;
    return res;
}

int main()
{
     
    int t = 1;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        matrix a, res;
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                cin >> a.m[i][j];
        res = binPow(a, k);
        ll ans = 0;
        for(int i = 0; i < n; ++i) ans = (ans + res.m[i][n - 1]) % mod;
        cout << ans << endl;
    }
    return 0;
}
