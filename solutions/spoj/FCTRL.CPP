#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
int main(){
	lli t,n,x;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&x);
		n =x;
		lli sum = 0,i=1;
		while(n)
		{
			n = x/(pow(5,i));
			sum += n;
			i++;
		}
		printf("%lli\n", sum);
	}	
	return 0;
}