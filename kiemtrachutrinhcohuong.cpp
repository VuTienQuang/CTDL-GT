#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
int cxet[1001] , par[1001];
int n , m;
void inp(){
	memset(cxet , 0 , sizeof(cxet));
	memset(par , 0 , sizeof(par));
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		adj[i].clear();
	}
	for(int i = 0;i < m;i++){
		int x , y;
		cin >> x >> y;
		adj[x].push_back(y);
		 
	}
	
}
bool DFS(int u){
	cxet[u] = 1;
	for(int x:adj[u]){
		if(cxet[x] == 0){
			if(DFS(x)) return true;
		}
		else if(cxet[x] == 1){
			return true;
		}
		
	}
	cxet[u] = 2;
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
				if(DFS(i )){
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
