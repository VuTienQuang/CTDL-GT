#include<bits/stdc++.h>

using namespace std;


#define vi vector<int>
 
#define all(x) (x).begin(), (x).end()
 

int main()
{
 
    int t = 1, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vi a(n);
        for(int &i : a) cin >> i;
        cout << lower_bound(all(a), 1) - a.begin() << endl;
    }
    return 0;
}
