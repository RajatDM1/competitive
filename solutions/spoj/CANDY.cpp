#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
int main(){
	int a[MAX];
	int c,sum,n,avg,flag;
	while(1)
	{
		scanf("%d",&n);
			if(n==-1)
				break;
		sum = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
			sum +=a[i];
		}
		if(sum%n!=0)
		{
			printf("-1\n");
		}
		else
		{
			avg = sum/n;c=0,flag = 1;
			while(flag)
			{
				flag = 0;
				for (int i = 0; i < n; ++i)
				{
					if(a[i]>avg)
					{
						a[i]=a[i]-1;
						// printf("new value at %d of a[i]%d\n",i,a[i]);
						c++;
						flag = 1;
					}
	
				}
			
			}
			printf("%d\n",c);
		}
	}	
	return 0;
}