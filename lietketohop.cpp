#include<bits/stdc++.h>
using namespace std;
int n , a[100] , k , ok;
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
int main(){
	cin >> n >> k;
	set<int> b; 
	for(int i = 0;i < n;i++){
		int c;
		cin >> c;
		b.insert(c); 
	} 
	n = b.size();
	int d[n +1] , i = 1;
	for(int x : b){
		d[i] = x ;
		i++; 
	} 
	ok = 1;
	ktao(); 
	while(ok){
		for(int i = 1;i <= k;i++){
			cout << d[a[i]] <<" ";
		}
		cout << endl;
		sinh();
	}
}
