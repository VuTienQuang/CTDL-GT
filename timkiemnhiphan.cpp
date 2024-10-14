#include<bits/stdc++.h>

using namespace std;


#define vi vector<int>
 
#define all(x) (x).begin(), (x).end()


int main()
{
     
    int t = 1, n, x, idx;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        vi a(n);
        for(int &i : a) cin >> i;
        idx = lower_bound(all(a), x) - a.begin();
        if(idx > 0 and idx < n and a[idx] == x) cout << idx + 1;
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
