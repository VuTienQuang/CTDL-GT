#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 1];
		set<int> s;
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		int c = 0;
		for(int i = 0 ;i < n;i++){
			while(a[i] > 0){
				int k = a[i] % 10;
				s.insert(k);
				a[i] /= 10;
			}
		}
		for(int x : s){
			cout << x << " ";
		}
		cout << endl;
	}
}
