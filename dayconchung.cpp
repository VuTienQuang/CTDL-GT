#include<bits/stdc++.h>

using namespace std;

 
#define F(i, a, b) for(int i = a; i < b; ++i)
 

int main()
{
    
    int t = 1, x, y, z, a;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> z;
        int a[x], b[y], c[z];
        bool check = 0;
        F(i, 0, x) cin >> a[i];
        F(i, 0, y) cin >> b[i];
        F(i, 0, z) cin >> c[i];
        int idxA, idxB, idxC;
        idxA = idxB = idxC = 0;
        while(idxA < x && idxB < y && idxC < z)
        {
            if(a[idxA] == b[idxB] && b[idxB] == c[idxC])
            {
                cout << a[idxA] << ' ';
                check = 1;
                ++idxA;
                ++idxB;
                ++idxC;
            }
            else if(a[idxA] < b[idxB]) ++idxA;
            else if(b[idxB] < c[idxC]) ++idxB;
            else ++idxC;
        }
        if(!check) cout << "NO";
        cout << endl;
    }
    return 0;
}
