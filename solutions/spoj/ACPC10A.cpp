#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
int main(){
	int x,y,z;
	while(1)
	{
		printf("inside\n");
		scanf("%d%d%d",&x,&y,&z);
		printf("%d%d%d\n",x,y,z);
		printf("%d%d\n",z-y,y-x);

		if(x==y==z==0)
			break;
		if((z-y)==(y-x))
		{
			printf("AP %d\n",z+(z-y));
		}
		else if((z/y)==(y/x))
		{
			printf("GP %d\n",z*(z/y));	
		}
		else
		{
			printf("nothing\n");
		}
	}	
	return 0;
}