#include<bits/stdc++.h>
using namespace std;
int n , m;
int vao[1001] , ra[1001];
void nhap(){
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		vao[i] = 0;
		ra[i] = 0; 
	} 
	for(int i = 0;i < m;i++){
		int x , y;
		cin >> x >> y;
		ra[x]++;
		vao[y]++; 
	}
} 
int kt(){
	for(int i = 1;i <= n;i++){
		if(vao[i] != ra[i]){
			return 0; 
		} 
	} 
	return 1; 
} 
int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		cout << kt() << endl; 
	} 
} 
