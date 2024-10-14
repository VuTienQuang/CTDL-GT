#include<bits/stdc++.h>

using namespace std;
 
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define sz size() 

inline string calc(vi &a, vi &b)
{
    for(int i = 0; i < a.sz; ++i) if(a[i] != b[i] and a[i] != b[a.sz - i - 1]) return "No";
        return "Yes";
}

int main()
{
    int t = 1, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vi a(n), b(n);
        for(int &i : a) cin >> i;
        b = a;
        sort(all(b));
        cout << calc(a, b) << endl;
    }
    return 0;
}
