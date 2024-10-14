#include<bits/stdc++.h>

using namespace std;

int n, k;
int a[105];
int sum;
bool check;

void Try(int i, int cur = 0)
{
    if(check) return;
    if(cur == sum)
    {
        check = 1;
        cout << "YES\n";
        return;
    }
    if(cur > sum) return;
    for(int j = i; j <= n; ++j) Try(j + 1, cur + a[j]);
}

int main()
{

    int t = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        sum = 0;
        check = 0;
        for(int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }
        if(sum & 1) cout << "NO\n";
        else
        {
            sum >>= 1;
            Try(1);
            if(!check) cout << "NO\n";
        }
    }
    return 0;
}
