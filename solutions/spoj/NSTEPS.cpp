#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
int even(int x, int y)
{
	if(x%2==0&&y%2==0)
		return 1;
	else
		if(x%2!=0&&y%2!=0)
			return 0;
	else
		{
	
			return -1;
		}
}
int main(){
	int t,x,y,res;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		res = even(x,y);
		
		if(res==-1)
		{
			printf("No Number\n");
			
		}
		else if(res==0)
		{
			if(x==y||x==y+2)
				printf("%d\n",x+y-1);
			else
				printf("No Number\n");
		}
		else if(res==1)
			{
				if(x==y||x==y+2)
					printf("%d\n",x+y);
				else
					printf("No Number\n");
			}
	}	
	return 0;
}