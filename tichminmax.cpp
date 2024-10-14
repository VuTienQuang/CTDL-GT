#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int m , n;
		cin >> m >> n;
		long long a[m + 1] , b[n + 1];
		for(int i = 0;i < m;i++){
			cin >> a[i];
		}
		for(int i = 0;i < n;i++){
			cin >> b[i];
		}
		sort(a , a+ n);
		sort(b , b+ m);
		cout << a[m - 1] * b[0] << endl;
	}
} 
