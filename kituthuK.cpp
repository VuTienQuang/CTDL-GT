#include<bits/stdc++.h>

using namespace std;

 
 

int a[26];

inline int calc(int &n, int &k)
{
    for(int i = n; i; --i)
    {
        if(k == a[i]) return i;
        else if(k > a[i]) k -= a[i];
    }
    return 0;
}

int main()
{
    a[1] = 1;
    for(int i = 2; i <= 26; ++i) a[i] = a[i - 1] << 1;
    int t = 1, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << (char) (calc(n, k) + 'A' - 1) << endl;
    }
    return 0;
}
