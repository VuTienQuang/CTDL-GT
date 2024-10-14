#include<bits/stdc++.h>
using namespace std;
int n; 
char  s ,x[100];
void in(){
	for(int i = 1;i  <= n;i++){
		cout <<x[i]; 
	} 
	cout << endl; 
} 
void Try(int i){
 	for(int j = 1 + i - 1 ; j <=  s - 'A' + 1;j++){
 		x[i] = 'A' + j -1 ;
 		if(i == n){
 			in(); 
		 } else{
		 	Try(i+ 1); 
		 } 
	 } 
 } 
int main(){
	cin >> s >>n;
	Try(1);
	 
} 
 
