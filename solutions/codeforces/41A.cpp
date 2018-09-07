#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	string s,t;
	cin>>s>>t;
	int len = t.length();len-=1;
	string res="";
	while(len>=0)
	{
		res+=t[len];
		len--;
	}	
	(s==res)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	return 0;
}