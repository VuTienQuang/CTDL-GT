#include<bits/stdc++.h>

using namespace std;

 
#define vi vector<int>
 

int main()
{
   
    int t = 1, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vi a(n);
        bool check = 0;
        for(int &i : a)
        {
            cin >> i;
            if(i > 0) check = 1;
        }
        int M = -101;
        if(!check) for(int &i : a) M = max(M, i);
        else
        {
            int sum = 0;
            for(int i = 0; i < n; ++i)
            {
                sum += a[i];
                if(sum < 0) sum = 0;
                M = max(sum, M);
            }
        }
        cout << M << endl;
    }
    return 0;
}
