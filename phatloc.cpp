#include<bits/stdc++.h>
using namespace std;
int n , a[100] ,ok;
void ktao(){
	a[1] = 8; 
	for(int i = 2;i <= n;i++){
		a[i] = 6;
	}
} 
void sinh(){
	int i = n - 1;
	while(i >= 2 && a[i] == 8){
		a[i] = 6;
		--i;
	}
	if(i == 1){
		ok = 0;
	}else{
		a[i] = 8;
	}
}
int kt(int a[] ,int n){
	for(int i =1;i <=n;i++){
		if(a[i] == 8 && a[i + 1] == 8){
			return 0; 
		}  
	} 
	int cnt = 0; 
	for(int i = 2 ; i <= n;i++){
		if(a[i] == 6){
			cnt++; 
		} else if(cnt > 3){
			return 0; 
		} else{
			cnt = 0; 
		} 
	}
	if(cnt > 3){
		return 0; 
	} 
	return 1; 
} 
int main(){
	cin >> n;
	ok = 1;
	ktao();
	while(ok){
		if(kt(a , n)){
			for(int i = 1;i <=n;i++){
			cout << a[i];
		}
		cout << endl;
		} 
		sinh();
	}
}
