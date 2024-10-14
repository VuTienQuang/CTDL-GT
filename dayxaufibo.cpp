#include<bits/stdc++.h>

using namespace std;
 
#define ll long long
 

int main()
{
    
    ll f[93];
    f[1] = f[2] = 1;
    for(int i = 3; i <= 92; ++i) f[i] = f[i - 1] + f[i - 2];
    int t = 1;
    ll n, k;
    string s = "AAB";
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        while(n > 2)
        {
            if(k <= f[n - 2]) n -= 2;
            else
            {
                k -= f[n - 2];
                --n;
            }
        }
        cout << s[n] << endl;
    }
    return 0;
}
