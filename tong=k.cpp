#include<bits/stdc++.h>
using namespace std;
int n, a[100],ok,b[100],k;

void ktao(){
	for(int i = 1;i <= n;i++){
		a[i] = 0; 
	} 
	cin >> n >> k ;
 	for(int i = 1;i <= n;i++){
 		cin >> b[i]; 
	 } 
} 
int kt(){
	int sum = 0;
	for(int i = 1;i <= n;i++){
		if(a[i] == 1){
			sum = sum + b[i]; 
		} 
	}
	return sum; 
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
	 ok = 1;
	 int cnt = 0;
	 ktao();
	 while(ok){ 
	 		int check = kt();  
	 		if(check == k){
	 			cnt++; 
	 			for(int i =1;i <= n;i++){
	 				if(a[i] == 1) 
					 cout << b[i] <<" "; 
				}
				cout << endl;
			 } 	  
		 sinh(); 
	 }
	 cout << cnt; 
 } 
