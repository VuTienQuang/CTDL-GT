#include <iostream>
using namespace std;
int kt(string s){
	int l = s.size(); 
	for(int i = 0;i < l/ 2 ;i++){
		if (s[i] != s[l - i - 1]){
			return 0; 
		}
	} 
	return 1; 
} 

void binary_strings(string s, int n) {
    if (n == 0) { // base case
        if(kt(s)){
        	for(int i  =0;i < s.size();i++){
        	cout << s[i] <<" "; 
		} 
		cout << endl; 
		} 
		 
    } else {
        binary_strings(s + "0", n - 1); // th�m ki tu 0 v�o x�u v� giam do d�i n
        binary_strings(s + "1", n - 1); // th�m ki tu 1 v�o x�u v� giam do d�i n
    }
}

int main() {
		int n; 
		cin >> n; 
	    binary_strings("", n);
    	return 0;
}
