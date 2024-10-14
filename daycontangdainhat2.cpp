#include<bits/stdc++.h>
using namespace std;
int LIS(int a[] ,int n){
	int l[n];
	int maxLength = 1;
	for(int i = 0;i < n;i++) l[i] = 1;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < i;j++){
			if(a[i] > a[j]){
				l[i] = max(l[i] , l[j] + 1);
				maxLength = max(maxLength , l[i]);
			}
		}
	}
	return maxLength;
}
int main(){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		cout << LIS(a, n) << endl;
}
