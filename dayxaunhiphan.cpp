#include<bits/stdc++.h>

using namespace std;
 
#define ll long long
 
int main()
{
   
    int t = 1, n;
    ll k;
    ll a[93];
    a[1] = a[2] = 1;
    for(int i = 3; i < 93; ++i) a[i] = a[i - 1] + a[i - 2];
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        while(n > 2)
        {
            if(k > a[n - 2])
            {
                k -= a[n - 2];
                --n;
            }
            else n -= 2;
        }
        cout << n - 1 << endl;
    }
    return 0;
}
