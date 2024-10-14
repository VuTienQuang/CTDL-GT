#include<bits/stdc++.h>
using namespace std;
 int n , m ,k;
 vector<int> adj[1001];
 bool cxet[1001]; 
 void inp(){
 	memset(adj , 0 , sizeof(adj)); 
 	cin >> n >> m >> k;
		 for(int i = 0;i < m;i++){
		 	int x , y;
			 cin >> x >> y;
			 adj[x].push_back(y);
			 adj[y].push_back(x); 
		 } 
		 memset(cxet,false ,sizeof(cxet)); 
		
 } 
 void DFS(int u){
 	cout <<u <<" ";
	 cxet[u] = true;
	 for(int x: adj[u]){
	 	if(cxet[x] == false){
	 		DFS(x); 
		 } 
	 } 
 } 
int main(){
	int t;
	cin >> t;
	while(t--){
		 inp(); 
		DFS(k);
		cout << endl; 
	} 
}

