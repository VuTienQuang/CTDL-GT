#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n;
bool check[100]; 

void DFS(int u){
	 stack<int> st;
	 st.push(u);
	 check[u] = true ;
	 cout <<u<<" "; 
	 while(!st.empty()){
	 	int s =st.top(); 
		st.pop();
		for(int i = 1; i <=n;i++){
			if(a[s][i]==1 && check[i] == false){
				cout << i<<" ";	
				st.push(s);
				st.push(i);
				 
				check[i] = true; 
				break; 
				 
			} 
		} 
	 } 
	} 
 
int main(){
	cin >> n ;
	for(int i = 1;i <=n;i++){
		for(int j = 1;j <=n;j++){
			cin >> a[i][j]; 
		} 
	} 
	memset(check,false , sizeof(check)); 
	int u;
	cin >> u; 
	DFS(u); 
	
} 
