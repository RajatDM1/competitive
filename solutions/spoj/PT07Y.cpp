#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
int flag =0;
int arr[MAX];
void initialize(int x)
{
	for(int i=0;i<=x;i++)
	{
		arr[i]=i;
	}
}
void un(int a, int b)
{
	arr[a]= b; 
}
int find(int a)
{
	while(arr[a]!=a)
	{
		a=arr[a];
	}
	return a;
}
int test(int a, int b)
{
	if(find(a)!=find(b))
	{
		un(a,b);
		return 1;
	}
	else{
		flag = 1;
		return -1;
	}

}
int main(){

	int x,y,a,b;
	scanf("%d%d",&x,&y);
	initialize(x);
	if(x!=y+1)
		printf("NO\n");	
	else
	{
		while(y--)
		{
			scanf("%d%d",&a,&b);
			if(test(a,b)==-1){
				// printf("NO\n");
				break;
			}
		}
		if(!flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}