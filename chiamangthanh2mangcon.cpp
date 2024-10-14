#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n , k;
		cin >> n >> k;
		int a[n+1];
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		sort(a ,a + n);
		long long sum1= 0 ,sum2 = 0;
		k = min(k , n-k);
		for(int i = 0;i < n;i++){
			if(i < k){
				sum1 += a[i];
			}else{
				sum2+= a[i];
			}
		}
		 
			cout << sum2  - sum1 << endl;
		
	}
}
