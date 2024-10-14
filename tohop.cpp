#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int Ckn(int n, int k) {
    int dp[n + 1][k + 1];
    memset(dp, 0, sizeof(dp));

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= min(i, k); j++) {
            if(j == 0 || j == i)
                dp[i][j] = 1;
            else
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
        }
    }

    return dp[n][k];
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int n , k;
		cin >> n >> k;
		cout << Ckn(n ,k) <<endl; 
	} 
}
