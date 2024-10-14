#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()


bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.se > b.se;
}

int main()
{
    int t = 1, n, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<pair<int, int>> v(n);
        for(pair<int, int> &i : v) cin >> x >> i.fi >> i.se;
        sort(all(v), cmp);
        bitset<1005> bs;
        int cnt = 0, total = 0;
        for(pair<int, int> &i : v)
        {
            while(bs[i.fi] and i.fi) --i.fi;
            if(!bs[i.fi] and i.fi)
            {
                ++cnt;
                total += i.se;
                bs[i.fi] = 1;
            }
        }
        cout << cnt << ' ' << total << endl;
    }
    return 0;
}
