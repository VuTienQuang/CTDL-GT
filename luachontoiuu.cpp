#include<bits/stdc++.h>

using namespace std;
#define fi first
#define se second
#define F(i, a, b) for(int i = a; i < b; ++i)
#define all(x) (x).begin(), (x).end()

inline bool cmp(pair<int, int> a, pair<int, int> b)
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
        F(i, 0, n) cin >> vp[i].fi >> vp[i].se;
        sort(all(vp), cmp);
        int cnt = 0;
        int last = 0;
        for(pair<int, int> i : vp)
        {
            if(i.first < last) continue;
            last = i.second;
            ++cnt;
        }
        cout << cnt << endl;
    }
    return 0;
}
