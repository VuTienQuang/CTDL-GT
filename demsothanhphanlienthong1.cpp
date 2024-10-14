#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool cxet[1001];
int n , m;
void inp(){
	cin >> n >> m;
	memset(cxet,false , sizeof(cxet));
	for(int i = 1;i <= n;i++){
		adj[i].clear(); 
	} 
	for(int i = 0;i < m;i++){
		int x ,y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	} 
} 
void DFS(int u){
	cxet[u] = true;
	for(int v : adj[u]){
		if(!cxet[v]){
			DFS(v); 
		} 
	} 
} 
int main(){
	int t;
	cin >> t;
	while(t--){
		inp();
		int cnt =0;
		for(int i = 1;i <= n;i++){
			if(!cxet[i]){
				DFS(i);
				cnt++; 
			} 
		}
		cout << cnt << endl; 
	} 
} 
