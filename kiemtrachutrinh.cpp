#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool cxet[1001];
int n , m;
void inp(){
	memset(cxet , false , sizeof(cxet));
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		adj[i].clear();
	}
	for(int i = 0;i < m;i++){
		int x , y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
}
bool DFS(int u , int par){
	cxet[u] = true;
	for(int x:adj[u]){
		if(!cxet[x]){
			if(DFS(x,u)) return true;
		}
		else if(x!= par){
			return true;
		}
	}
	return false;
}
int main(){
	
	int t;
	cin >> t;
	while(t--){
		inp();
		int kt = 0;
		for(int i = 1;i <= n;i++){
			if(!cxet[i]){
				if(DFS(i, 0)){
					cout << "YES" << endl;
					kt = 1;
					break;
				}
			}
		}
		if(kt == 0){
			cout << "NO" <<endl;
		}
		
	}
} 
