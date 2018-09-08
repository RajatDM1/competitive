#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	map<string,string>mp;
	int a,b,xl,yl;
	string x,y,s;
	cin>>a>>b;
	for(int i = 0;i<b;i++)
	{
		cin>>x>>y;
		xl = x.length();
		yl = y.length();
		if(xl<=yl)
			{mp[y] = x;mp[x]=x;}
		else
			{mp[x]= y;mp[y] =y;}
	}	
	for (int i = 0; i < a; ++i)
	{
		cin>>s;
		cout<<mp[s]<<" ";
	}

	return 0;
}