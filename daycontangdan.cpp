#include<bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define sz size()
#define all(x) (x).begin(), (x).end()

int n;
int a[35] = {};
vector<string> vs;
vector<int> tmp;

inline void print()
{
    string s = "";
    for(int &i : tmp) s += to_string(i) + ' ';
    vs.pb(s);
}

inline void Try(int i)
{
    for(int j = i + 1; j <= n; ++j)
    {
        if(a[j] > a[i])
        {
            tmp.pb(a[j]);
            if(tmp.sz > 1) print();
            Try(j);
            tmp.pop_back();
        }
    }
}

int main()
{
    int t = 1;
    //cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; ++i) cin >> a[i];
        Try(0);
        sort(all(vs));
        for(string &i : vs) cout << i << endl;
    }
    return 0;
}
