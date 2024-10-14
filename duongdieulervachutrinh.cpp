#include<bits/stdc++.h>
using namespace std;
int n , m;
int degree[1001];
void nhap(){
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		degree[i] = 0; 
	} 
	for(int i = 0;i < m;i++){
		int x , y;
		cin >> x >> y;
		degree[x]++;
		degree[y]++; 
	}
} 
int kt(){
	int bacle = 0;
	for(int i = 1;i <= n;i++){
		if(degree[i]%2 != 0){
			bacle++; 
		} 
	}
	if(bacle == 0){
		return 2; 
	} else if(bacle == 2){
		return 1; 
	} else{
		return 0; 
	} 
} 
int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		cout << kt() << endl; 
	} 
} 
