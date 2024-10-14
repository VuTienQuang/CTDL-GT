#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		sort(a ,a + n);
		int i = 0;
		while(i < n / 2){
			cout << a[n - i - 1] <<" "<< a[i] <<" ";
			i++;
		}
		if(n % 2 != 0){
			cout << a[n / 2];
		}
		cout << endl;
	}
}
