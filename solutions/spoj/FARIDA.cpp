#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
lli max(lli a, lli b)
{
	return a>b?a:b;
}
int main(){
	lli t,n,x,k;
	n = 1;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&x);
		lli dp[x+1] = {0};
		lli sum = 0;
		for(lli i=1;i<=x;i++)
		{
			scanf("%lld",&k);
			dp[i] = max((i>1?dp[i-1]:0),(i>2?dp[i-2]:0)+k);
		}
		printf("Case %lld: %lld\n",n++,dp[x]);
	}
	return 0;
}