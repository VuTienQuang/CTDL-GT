#include<bits/stdc++.h>
using namespace std;
int n, a[100],ok;

void ktao(){
	for(int i = 1;i <= n;i++){
		a[i] = 0; 
	} 
} 
int kt(){
	if(a[1] != 1 || a[n] !=0){
		return 0; 
	} 
	for(int i = 1;i < n;i++){
		if(a[i] == 1 && a[i+1] == 1){
			return 0;
		}
	}
	return 1;
} 
 void sinh(){
 	int i = n;
	 while(i >= 1 && a[i] == 1){
	 	a[i] = 0;
		 --i; 
	 } 
	 if(i == 0){
	 	ok = 0 ;
	 } 
	 else{
	 	a[i] = 1 ;
	 } 
 } 
 int main(){
 	int t;
 	cin >> t;
 	while(t--){
 		cin >> n;
		 ok = 1;
		 ktao();
		 while(ok){
		 	int ktra = kt(); 
		 	if(ktra){
		 		for(int i =1;i <= n;i++){
		 		if(a[i] == 1){
		 			cout <<"H"; 
				 } else{
				 	cout << "A"; 
				 } 
			 }
			 cout << endl; 
			 } 
			 ktra = 0; 
			 sinh(); 
		 } 
	 }
 } 
