#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
bool check(vi &a, int n)
{
    for(int i = 2; i <= n; ++i) if(abs(a[i] - a[i - 1]) == 1) return 0;
    return 1;
}

int main()
{
    
    int t = 1, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n < 4)
        {
            cout << endl;
            continue;
        }
        vi a(n + 1);
        for(int i = 1; i <= n; ++i) a[i] = i;
        while(next_permutation(a.begin() + 1, a.end()))
        {
            if(check(a, n))
            {
                for(int i = 1; i <= n; ++i) cout << a[i];
                cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
