#include<bits/stdc++.h>

using namespace std;

 
#define fi first
#define se second
#define ll long long
#define all(x) (x).begin(), (x).end()
#define F(i, a, b) for(int i = a; i < b; ++i)
 

inline bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.se == b.se) return a.fi < b.fi;
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
