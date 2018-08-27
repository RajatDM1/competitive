#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
void res1(lli x, lli y)
{
	// printf("inside res1\n");
	lli res = 1;
	x = x%10;
	while(y)
	{
		// printf("inside while\n");
		if(y & 1)
			{
				res = res*x;
				// printf("inside if\n");
			}


		y=y>>1;
		x =(x*x)%10;
		// printf("x multiplied\n");
	}
	printf("%lli\n", res%10);
}
int main(){
	int t;
	lli x,y;
	scanf("%d",&t);
	while(t--)
	{	
		scanf("%lld%lld",&x,&y);
		res1(x,y);
	}	
	return 0;
}