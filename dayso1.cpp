#include<bits/stdc++.h>
using namespace std;
int a[100];
void Try(int i){
	if(i == 0){
		return;
	}else{
		for(int j = 0;j < i;j++){
			a[j] = a[j] + a[j + 1];
		}
		cout <<"[";
		for(int j = 0;j < i;j++){
			cout << a[j];
			if(j< i - 1){
				cout <<" ";
			}else{
				cout <<"]";
			}
		}
		cout << endl;
	}
	Try(i - 1);
	
	
}
 int main(){
 	int t;
	 cin >> t;
	 while(t--){
	 	int n;
	 	cin >> n;
	 	for(int i = 0;i < n;i++){
	 		cin >> a[i];
		 }
		 cout <<"[";
		 for(int i = 0;i < n;i++){
		 	cout << a[i];
		 	if(i <n -1){
		 		cout <<" ";
			 }else{
			 	cout <<"]";
			 }
		 }
		 cout << endl;
		Try(n - 1);
	 } 
 } 
