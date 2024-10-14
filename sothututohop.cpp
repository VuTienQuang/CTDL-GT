#include<bits/stdc++.h>
using namespace std;
int n , a[100] , b[100] , k , ok;
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
		for(int j = i+ 1;j <= k;j++){
			a[j] = a[j -1] + 1;
		}
	}
}
int kt(int a[] ,int b[]){
	for(int i = 1;i <=k;i++){
		if(a[i] != b[i]){
			return 1; 
		} 
	}
	return 0; 
} 
int main(){
	
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		ok = 1;
		ktao();
		for(int i = 1;i <= k;i++){
			cin >> b[i]; 
		} 
		int cnt = 1; 
		while(ok){
			if(kt(a , b )){
				cnt++; 
			} else{
				cout << cnt << endl;
				break; 
			} 
			sinh();
			
		}
	} 
}
