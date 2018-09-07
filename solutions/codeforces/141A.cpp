#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	string a,b,c;
	int al,bl,cl,flag = 0;
	cin>>a>>b>>c;
	al = a.length();
	bl = b.length();
	cl = c.length();
	a+=b;
	if(cl!=al+bl)
		flag =1;
	else
	{
		sort(a.begin(),a.begin()+(al+bl));
		sort(c.begin(),c.begin()+(al+bl));
	}
	if(a!=c)
		flag = 1;
	!flag?cout<<"YES"<<endl:cout<<"NO"<<endl;
	return 0;
}