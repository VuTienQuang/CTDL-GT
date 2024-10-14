#include<bits/stdc++.h>

using namespace std;

int main()
{
     
    int t = 1, n, m, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int f[100005] = {};
        int mi = INT_MAX, ma = INT_MIN;
        while(n--)
        {
            cin >> x;
            ++f[x];
            mi = min(mi, x);
            ma = max(ma, x);
        }
        int cnt = 0;
        for(int i = mi; i <= ma; ++i) cnt += !f[i];
        cout << cnt;
        cout << endl;
    }
    return 0;
}
