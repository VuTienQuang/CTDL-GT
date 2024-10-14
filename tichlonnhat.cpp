#include<bits/stdc++.h>

using namespace std;


int main()
{
 
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 0;i < n;i++){
    	cin >> a[i];
	}
	sort(a , a + n);
	long long M1 = a[0] * a[1];
	long long M2 = a[n-1]*a[n-2];
	long long M3 = a[n-1]*a[n-2]*a[n-3];
	long long M4 = a[n-1]*a[0]*a[1];
	cout << max(max(M1 , M2) , max(M3 , M4)) << endl;
}
