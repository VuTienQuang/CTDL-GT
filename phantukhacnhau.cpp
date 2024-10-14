#include<bits/stdc++.h>

using namespace std;

#define ll long long 
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define sz size() 

inline int binSearch(vll &a, vll &b)
{
    int l = 0, r = a.sz - 2, mid, res;
    while(l <= r)
    {
        mid = (l + r) >> 1;
        if(a[mid] != b[mid])
        {
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;
}

int main()
{
    int t = 1, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vll a(n), b(n - 1);
        for(ll &i : a) cin >> i;
        for(ll &i : b) cin >> i;
        if(a[0] != b[0]) cout << 1 << endl;
        else if(a.back() != b.back()) cout << n << endl;
        else cout << binSearch(a, b) + 1 << endl;
    }
    return 0;
}
