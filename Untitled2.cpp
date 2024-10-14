#include<bits/stdc++.h>
using namespace std;
int memoize[100] = {0};
long fibmem(int n){
	if(memoize[n] == 0){
		if(memoize[n] == 0){
			if(n <= 1) memoize[n] = n;
			else memoize[n] = fibmem(n - 1) + fibmem(n-2); 
		} 
	} 
	return memoize[n]; 
} 
int main(){
	int n;
	cin >> n;
	cout <<fibmem(n); 
} 
