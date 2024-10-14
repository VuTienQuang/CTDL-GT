#include<bits/stdc++.h>
using namespace std;
int n , m;
vector<int> adj[1001];
void nhap(){
	cin >> n >>m;
	for(int i = 1;i <= n;i++){
		adj[i].clear(); 
	} 
	for(int i = 0;i < m;i++){
		int x , y;
		cin >> x >>y; 
		adj[x].push_back(y);
		adj[y].push_back(x); 
	} 
	for(int i = 1;i <= n;i++){
		if(adj[i].size() % 2 != 0){
			cout <<"No"<<endl; 
		} 
	} 
	cout <<"Yes"<<endl;
	return; 
	
} 
int main() {
	int t;
	cin >> t;
	while(t--){
		nhap(); 
	} 
}
