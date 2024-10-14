#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 1];
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		sort(a , a+ n);
		long long c = 0 , l = 0;
		for(int i = 0;i < n;i++){
			if(i % 2==0){
				c = c* 10 + a[i];
			}else{
				l = l*10 + a[i];
			}
		}
		cout << c + l << endl;
	}
}
