#include<bits/stdc++.h>
using namespace std;
int cxet[1001];
void nhap(){
	int n;
		cin >> n;
		memset(cxet , false , sizeof(cxet));
		for(int i = 0;i < n -1;i++){
			int x , y;
			cin >> x >> y;
			if(cxet[x] == false && cxet[y] == false || cxet[x] == true && cxet[y] == false || cxet[x] == false && cxet[y] == true ){
				cxet[x] = true;
				cxet[y] = true;
			}else{
				cout <<"NO"<<endl;
				return;
			}
			
		}
		cout <<"YES" <<endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
	}
} 
