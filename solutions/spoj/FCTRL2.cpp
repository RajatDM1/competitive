#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
void fact(lli n)
{
	int a[200];
	lli m = 1,temp = 0,index,x,m1;
	a[0]= 1;
	
	while(n)
	{
		m1 = m;
		// printf("inside the loop\n");
		index = -1;
		while(m1--)
		{
			x = a[++index]*n+temp;
			a[index] = x%10;
			temp = x/10;
			// index++;
		}
		while(temp)
		{
			a[++index]= temp%10;
			temp/=10;
			m++;
		}
		n--;
	}
	// printf("value of m %lli\n",m);
	// int count;
	for(int i = m-1; i>=0;i--)
	{
		printf("%d",a[i]);
		// if(a[i]==0&&a[i-1]==0)
		// 	count++;
	}
	printf("\n");
}
int main(){
	lli t,n; 
	scanf("%lli",&t);
	while(t--){
		scanf("%lli",&n);
		// printf("value\n");
		fact(n);
	}
	while(t--)	
	return 0;
}
