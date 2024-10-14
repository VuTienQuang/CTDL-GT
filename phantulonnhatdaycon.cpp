#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n , k;
		cin >> n >>k;
		int s[n+1];
		for(int i = 0;i < n;i++){
			cin >> s[i];
		}
		for(int i = 0;i <= n - k;i++){
			int maxa = -999999999;
			for(int j = i ; j < i + k;j++){
				if(s[j] > maxa){
					maxa = s[j];
				}
			}
			cout << maxa << " ";
		}
		cout << endl;
		
	}
} 
