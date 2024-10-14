#include<bits/stdc++.h>
using namespace std;
int n , m , a[100][100] , cnt;
void Try(int i , int j){
	if(i == n -1 && j == m -1){
		cnt++;
	}else{
		if(i < n && j < m){
			Try(i+1 , j);
			Try(i , j + 1);
		}
	}	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n  >> m;
		cnt = 0;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				cin >> a[i][j];
			}
		}
		Try(0 , 0);
		cout << cnt <<endl;
		
	}
} 
