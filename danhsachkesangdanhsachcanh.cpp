#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> edge; 
int main() {
	int t = 1;
//	cin >> t;
	while(t--){
		int n;
		cin >> n;cin.ignore();
		int a[n+1][n+1] = {}; 
		for(int i = 1;i <= n;i++){
			string s, num;
			getline(cin,s); 
			stringstream ss(s);
			while(ss>>num){
				if(stoi(num) > i){
					edge.push_back({i , stoi(num)}); 
				} 
			} 
		} 
		for(auto it : edge){
			cout << it.first <<" "<<it.second<<endl; 
		} 
	} 
}
