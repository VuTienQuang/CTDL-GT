#include<bits/stdc++.h>

using namespace std;

#define ll long long  
#define sz size() 
 
int main()
{
    
    int t = 1, n, x;
    cin >> t;
    string s;
    priority_queue<int> pq;
    while(t--)
    {
        cin >> n >> s;
        int f[30] = {};
        for(char &i : s) ++f[i - 'A'];
        for(int i = 0; i < 26; ++i) if(f[i]) pq.push(f[i]);
        while(n--)
        {
            x = pq.top();
            pq.pop();
            --x;
            pq.push(x);
        }
        ll res = 0;
        while(pq.sz)
        {
            res += 1LL * pq.top() * pq.top();
            pq.pop();
        }
        cout << res << endl;
    }
    return 0;
}
