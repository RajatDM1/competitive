#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
int main(){
	lli t,x,n;
	scanf("%lld",&t);
	while(t--)
	{
		lli sum = 0;
		scanf("%lld",&n);
		for(int i = 0;i<n;i++)
		{
			scanf("%lld",&x);
			sum = (sum+x)%n;
		}
		// printf("sum is %lld and n is %lld\n",sum , n);
		if(sum%n==0)
			printf("YES\n");
		else
			printf("NO\n");
	}	
	return 0;
}