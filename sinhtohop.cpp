#include<bits/stdc++.h>
using namespace std;
int n, a[100] ,k ,ok;
void ktao(){
	for(int i = 1;i <= k;i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		--i;
	}
	if(i == 0){
		ok = 0;
	}else{
		a[i]++;
		for(int j = i+ 1;j <=k;j++){
			a[j] = a[j - 1] + 1;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >>k;
		ktao();
		ok = 1;
		while(ok){
			for(int i = 1;i <= k;i++){
				cout << a[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	
	}
}