#include<bits/stdc++.h>

using namespace std;


int main()
{
    
    int t = 1, n, cnt;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        sort(a, a + n);
        cnt = n;
        int l = n >> 1, r = n - 1, mid = n >> 1;
        --l;
        while(~l and r >= mid)
        {
            if(a[r] >= a[l] << 1)
            {
                --cnt;
                --l;
                --r;
            }
            else --l;
        }
        cout << cnt << endl;
    }
    return 0;
}

