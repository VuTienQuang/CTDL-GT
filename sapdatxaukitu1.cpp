#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		set<char> v;
		for(int i = 0;i  < s.size();i++){
			v.insert(s[i]);
		}
		int max = 0;
		for(char i : v){
			int cnt = 0;
			for(int j = 0;j < s.size();j++){
				if(i == s[j]){
					cnt++;
				}
			}
			if(cnt > max){
				max = cnt;
			}
		}
		if(s.size() - max >= max - 1){
			cout << "1" <<endl;
		}else{
			cout <<"-1"<<endl;
		}
	}
}
