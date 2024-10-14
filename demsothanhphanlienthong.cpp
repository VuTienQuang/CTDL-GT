#include<bits/stdc++.h>
using namespace std;
int cxet[1001];
vector<int> adj[1001];
vector<int> radj[1001];
int n , m;
stack<int> st;
void inp(){
	cin >>n >> m;
	for(int i  = 1;i <= n;i++){
		adj[i].clear();
		radj[i].clear(); 
	}
	
	for(int i = 0;i < m;i++){
		int x ,y;
		cin >> x >>y;
		adj[x].push_back(y);
		radj[y].push_back(x);
	}
}
void DFS1(int u){
	cxet[u] = true;
	for(int x: adj[u]){
		if(!cxet[x]){
			DFS1(x); 
		} 
	} 
	st.push(u); 
}
void DFS2(int u){
	cxet[u] = true;
 
	for(int x: radj[u]){
		if(!cxet[x]){
			DFS2(x); 
		} 
	}	 
} 
void SCC(){
	memset(cxet , false , sizeof(cxet)); 
	for(int i = 1;i <= n;i++){
		if(!cxet[i]){
			DFS1(i); 
		} 
	} 
	int cnt = 0; 
	memset(cxet , false , sizeof(cxet)); 
	while(!st.empty()){
		int u = st.top();
		st.pop();
		if(!cxet[u]){
			DFS2(u); 
			cnt++;
		} 
	}
	if(cnt == 1) cout <<"YES\n";
	else cout << "NO\n" ;
} 
int main(){
	int t;
	cin >> t;
	while(t--){
		inp();
		SCC(); 
	}
} 
