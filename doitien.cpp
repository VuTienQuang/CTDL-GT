#include<bits/stdc++.h>

using namespace std;
int a[] = {1,2,5,10,20,50,100,200,500,1000}; 
int main() {
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int cnt = 0 , i = 9;
		while(n){
			cnt+= n/a[i];
			n%= a[i];
			--i; 
		} 
		cout << cnt <<endl; 
		 
		 
	} 
}
