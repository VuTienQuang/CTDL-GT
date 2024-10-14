#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n , m;
		cin >> n >> m; 
		multiset<int> s;
		for(int i = 0;i < n;i++){
			int a;
			cin >> a;
			s.insert(a); 
		} 
		for(int i = 0;i < m;i++){
			int b;
			cin >> b;
			s.insert(b); 
		} 
		for(int x : s){
			cout << x << " "; 
		} 
		cout << endl; 
	}
} 
