#include<bits/stdc++.h>
using namespace std;
int n , m;
vector<int> adj[1001];
bool cxet[1001];
vector<pair<int , int>> dscanh;
void nhap(){
	cin >> n >> m;
	memset(cxet , false , sizeof(cxet));
	dscanh.clear();
	for(int i = 1;i <= n;i++){
		adj[i].clear();
	}
	for(int i = 0;i < m;i++){
		int x , y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
		dscanh.push_back({x ,y});
	}
}
void dfs(int u){
	cxet[u] = true;
	for(int v : adj[u]){
		if(!cxet[v]){
			dfs(v);
		}
	}
}
void dinhtru(){
	int ans = 0;
	int tplt = 0;
	memset(cxet ,false ,sizeof(cxet));
	for(int i =1;i <= n;i++){
		if(!cxet[i]){
			tplt ++;
			dfs(i);
		}
	}

	for(int i = 1;i <= n;i++){
		memset(cxet , false , sizeof(cxet));
		int dem = 0;
		cxet[i] = true;
		for(int j = 1;j <= n;j++){
			if(!cxet[j]){
				dem++;
				dfs(j);
			}
		}
		if(dem > tplt){
			cout <<i <<" " ;
			ans++;
		}
		
	}
	
	
}
void dfs2(int u , int s ,int t){
	cxet[u] = true;
	for(int v : adj[u]){
		if(u == s && v == t || u == t && v == s) continue;
		if(!cxet[v]){
			dfs2(v ,s ,t);
		}
	}
}
void canhcau(){
	int ans = 0;
	int tplt = 0;
	memset(cxet ,false ,sizeof(cxet));
	for(int i =1;i <= n;i++){
		if(!cxet[i]){
			tplt ++;
			dfs(i);
		}
	}
	for(auto it : dscanh){
		int x = it.first , y = it.second;
		memset(cxet ,false ,sizeof(cxet));
		int dem = 0;
		for(int j = 1;j <= n;j++){
			if(!cxet[j]){
				dem++;
				dfs2(j , x ,y);
			}
		}
		if(dem > tplt){
			cout << x <<" "<<y  <<" ";
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		
		dinhtru();
		cout << endl;
	}
}
