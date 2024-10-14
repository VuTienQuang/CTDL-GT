#include<bits/stdc++.h>

using namespace std;

 
#define ll long long
#define vi vector<int>
#define sz size()

int main()
{
  
    int t = 1, n, tmp;
    cin >> t;
    while(t--)
    {
        ll sum = 0;
        cin >> n;
        priority_queue<int, vi, greater<int>> pq;
        while(n--)
        {
            cin >> tmp;
            pq.push(tmp);
        }
        while(pq.sz > 1)
        {
            tmp = pq.top();
            pq.pop();
            tmp += pq.top();
            pq.pop();
            sum += tmp;
            pq.push(tmp);
        }
        cout << sum << endl;
    }
    return 0;
}
