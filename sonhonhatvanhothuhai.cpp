#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set<int> s;
		for(int i = 0;i < n;i++){
			int x;
			cin >> x;
			s.insert(x); 
		} 
		int cnt = 0; 
		if(s.size() == 1){
			cout <<"-1";
		} else{
			for(int i : s){
			if(cnt < 2){
				cout << i <<" "; 
				cnt++; 
			} else{
				break; 
			} 
		} 
		} 
		cout << endl; 
	} 
} 
