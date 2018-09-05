#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int dp[MAX] = {0};
int check(int t)
{
	lli y,num=0;
	if(dp[t]!=0)
		return -1;
	int x = t;
	while(x)
	{
		y = x%10;
		y= y*y;
		x/=10;
		num+=y;
	}
	dp[t] = num;
	return num;
}
int main(){
	lli t,c=0;
	scanf("%lld",&t);
	while(t!=1)
	{
		t = check(t);
		if(t==-1)
		{
			cout<<-1<<endl;
			break;
		}
		c++;
	}	
	if(t!=-1) 
		cout<<c<<endl;
	return 0;
}