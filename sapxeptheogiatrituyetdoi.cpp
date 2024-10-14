#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

int main()
{
    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector<pair<int, int>> vp(n);
        for(int i = 0; i < n; ++i)
        {
            cin >> vp[i].second;
            vp[i].first = abs(vp[i].second - k);
        }
        stable_sort(all(vp), cmp);
        for(pair<int, int> i : vp) cout << i.second << ' ';
        cout << endl;
    }
    return 0;
}
