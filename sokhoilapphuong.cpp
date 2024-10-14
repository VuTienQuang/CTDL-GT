#include<bits/stdc++.h>

using namespace std;
#define ll long long  
#define vll vector<ll>
#define sz size()
#define pb push_back


vll v;

string calc(string &s)
{
    string tmp;
    for(ll &i : v)
    {
        tmp = to_string(i);
        int idx = 0;
        for(char &j : s) if(j == tmp[idx]) ++idx;
        if(idx == tmp.sz) return tmp;
    }
    return to_string(-1);
}

int main()
{
    int t = 1;
    cin >> t;
    for(int i = 1e2; i; --i) v.pb(i * i * i);
    string s;
    while(t--)
    {
        cin >> s;
        cout << calc(s) << endl;
    }
    return 0;
}
