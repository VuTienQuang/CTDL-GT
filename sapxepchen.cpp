#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int  n, x;
        cin >> n;
        multiset<int> s;
        for(int i = 0; i < n; ++i)
        {
            cin >> x;
            s.insert(x);
            cout << "Buoc " << i << ": ";
            for(int i : s) cout << i << ' ';
            cout << endl;
        }
    return 0;
}
