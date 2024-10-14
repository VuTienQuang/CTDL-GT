#include<bits/stdc++.h>

using namespace std;

 
#define vi vector<int>
 

int main()
{
   
    int t = 1, n;
    //cin >> t;
    while(t--)
    {
        cin >> n;
        vi a(n + 5), f(n + 5, 0);
        for(int i = 1; i <= n; i++) cin >> a[i];
        int res = 0;
        for(int i = 1; i <= n; i++)
        {
            f[a[i]] = f[a[i] - 1] + 1;
            res = max(res, f[a[i]]);
        }
        cout << n - res;
    }
    return 0;
}
