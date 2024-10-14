#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		multiset<int> s;
		int n;
		cin >> n;
		for(int i = 0;i < n;i++){
			int a;
			cin >> a;
			s.insert(a);
		}
		for(int x : s){
			cout << x <<" ";
		}
		cout << endl;
	}
}
