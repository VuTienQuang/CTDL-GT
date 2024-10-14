#include<bits/stdc++.h>
using namespace std;
int a[15][15] , n;
void Try(int i){
	if(i == n){
		return;
	}
	for(int j = 0;j < n - i;j++){
		a[i][j] = a[i - 1][j] + a[i - 1][j+ 1];
	}
	Try(i+ 1);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i  =0;i < n;i++){
			cin >> a[0][i];
		}
		Try(1);
		for(int i = n -1;i >=0;i--){
			cout << "[";
			for(int j = 0;j < n - i;j++){
				cout << a[i][j];
				if(j < n - i -1){
					cout <<" ";
				}
			}
			cout <<"]";
			cout << " ";
		}
	}
}
