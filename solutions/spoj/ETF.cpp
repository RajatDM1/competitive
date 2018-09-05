#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int etf(int x)
{
	lli res = x;
	for(int i = 2;i*i<=x;i++)
	{
		if(x%i==0)
		{
			while(x%i==0)
				x/=i;
			res-=res/i;
		}
	}
	if(x>1)
		res-=res/x;
	return res;
}
int main(){
	int t;
	lli x;
	cin>>t;
	while(t--)
	{
		scanf("%lld",&x);
		printf("%d\n",etf(x));
	}	
	return 0;
}