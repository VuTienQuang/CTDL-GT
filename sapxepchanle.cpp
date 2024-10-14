#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n + 1];
	for(int i = 0;i < n;i++){
		cin >> a[i]; 
	} 
	vector<int> chan ,le; 
	for(int i = 0;i < n;i++){
		if(i % 2 != 0){
			chan.push_back(a[i]); 
		} else{
			le.push_back(a[i]); 
		} 
	} 
	sort(chan.begin() , chan.end());
	sort(le.begin() , le.end()); 
	int t = le.size() , k = chan.size() ;
	for(int i = 0;i < n/2;i++){
		cout << le[i] <<" "<<chan[k -i - 1]<<" "; 
	} 
	if(n%2!=0){
		cout << le[t-1]; 
	} 
	 
} 
