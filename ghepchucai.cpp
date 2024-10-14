#include<bits/stdc++.h>

using namespace std;
#define sz size()
#define all(x) (x).begin(), (x).end()


bool check(char c)
{
    return (c == 'A' or c == 'E');
}

bool ok(string s)
{
    for(int i = 0; i < s.sz; ++i)
    {
        if(check(s[i]))
        {
            if(i == 0 or i == s.sz - 1) continue;
            if(!check(s[i - 1]) and !check(s[i + 1])) return 0;
        }
    }
    return 1;
}

int main()
{
    int t = 1;
    //cin >> t;
    while(t--)
    {
        string s = "ABC";
        char c;
        cin >> c;
        for(char j = 'D'; j <= c; ++j) s += j;
        do
        {
            if(ok(s)) cout << s << endl;
        }
        while(next_permutation(all(s)));
    }
    return 0;
}
