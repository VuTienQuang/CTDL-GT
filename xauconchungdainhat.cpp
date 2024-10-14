#include<bits/stdc++.h>
using namespace std;
int lcs(string s1 , string s2){
	int n = s1.size();
	int m = s2.size();
	int f[n + 1][m +1];
	for(int i = 0;i <=n;i++){
		for(int j = 0;j <= m;j++){
			if(i==0 || j == 0){
				f[i][j] = 0;
			}
			else{
				if(s1[i-1] == s2[j - 1]){
					f[i][j] = f[i - 1][j-1]+1;
				}
				else{
					f[i][j] = max(f[i-1][j] , f[i][j-1]);
				}
			}
		}
	}
	return f[n][m];
	
	
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1 , s2;
		cin >> s1 >> s2;
		cout << lcs(s1,s2) << endl;
	}
}
