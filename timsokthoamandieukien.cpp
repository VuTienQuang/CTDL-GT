#include<bits/stdc++.h>

using namespace std;

 
#define sz size()
 
#define pb push_back
#define vi vector<int>
 #define all(x) (x).begin(), (x).end()

inline bool ok(string &s)
{
    int f[10] = {};
    for(char &i : s)
    {
        ++f[i - '0'];
        if(f[i - '0'] > 1) return 0;
    }
    return 1;
}

int main()
{
    
    int t = 1, l, r, x, y;
    vi v;
    queue<string> q;
    q.push("");
    string top, cur;
    int tmp;
    bool check = 1;
    while(check)
    {
        top = q.front();
        q.pop();
        if(top == "0") continue;
        for(int i = 0; i <= 5; ++i)
        {
            cur = top + to_string(i);
            if(!ok(cur)) continue;
            q.push(cur);
            tmp = stoi(cur);
            if(tmp > 1e5)
            {
                check = 0;
                break;
            }
            v.pb(tmp);
        }
    }
    cin >> t;
    while(t--)
    {
        cin >> l >> r;
        x = lower_bound(all(v), l) - v.begin();
        y = lower_bound(all(v), r) - v.begin();
        if(y >= v.sz or v[y] > r) --y;
        cout << y - x + 1 << endl;
    }
    return 0;
}
