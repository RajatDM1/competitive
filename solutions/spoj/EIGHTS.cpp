#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
int main(){
	long long int t,k,a;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&k);
		a = 192+(k-1)*250;
		printf("%lld\n",a);
	}	
	return 0;
}