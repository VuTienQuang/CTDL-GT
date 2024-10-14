#include<bits/stdc++.h>
using namespace std;
int n , a[100][100];
string s = "";
vector <string> v;
void Try(int i , int j ,string s){
	if(i == n && j == n){
		v.push_back(s);
	}
	if(i + 1 <= n && j <=n && a[i + 1][j] == 1){
		s+='D';
		Try(i + 1 , j ,s);
		s.pop_back();
	}
	if(i <= n && j + 1 <= n && a[i][j + 1] == 1){
		s+= 'R'; 
		Try(i , j + 1 ,s);
		s.pop_back();
	}
}
int main()
{
	int t;cin >>t;
	while(t--)
	{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin >>a[i][j];
		}
	}
	if(a[1][1]==0)
	{
		cout <<"-1"<<endl;
	}else
	{
		Try(1,1,s);
	if(v.size()==0)
	{
		cout <<"-1";
	}else
	{
		for(auto x:v)
		{
			cout <<x<<" ";
		}
	}
	v.clear();
	cout <<endl;
	}
}
}

