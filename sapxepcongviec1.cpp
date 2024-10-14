#include<bits/stdc++.h>

using namespace std;

 
#define fi first
#define se second
 
#define all(x) (x).begin(), (x).end()
 

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.se < b.se;
}

int main()
{
    int t = 1, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<pair<int, int>> vp(n);
        for(int i = 0; i < n; ++i) cin >> vp[i].fi;
        for(int i = 0; i < n; ++i) cin >> vp[i].se;
        sort(all(vp), cmp);
        int cnt = 1, cur = vp[0].se;
        for(int i = 1; i < n; ++i)
        {
            if(vp[i].fi >= cur)
            {
                ++cnt;
                cur = vp[i].se;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
