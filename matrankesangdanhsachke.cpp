#include<bits/stdc++.h>
using namespace std;

int main(){
	int t = 1;
//	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1][n+1];
		vector<int> adj[1001]; 
		for(int i = 1;i <= n;i++){
			for(int j = 1;j<=n;j++){
				cin >> a[i][j];
			}
		}
		for(int i = 1;i <= n;i++){
			for(int j = 1;j<=n;j++){
				if(a[i][j] == 1){
					adj[i].push_back(j); 
				}
			}
		}
		for(int i = 1;i <= n;i++){
		 
			for(int x : adj[i]){
				cout << x <<" "; 
			} 
			cout <<endl; 
		} 
	}
} 
