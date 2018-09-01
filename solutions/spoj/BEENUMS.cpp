#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int check(lli n)
{
	lli num,i;
	num = (4*n-1)/3;
	for(i=0;i*i<=num;i++)
	{
		if((i*i)==num)
			return 1;
	}
	return 0;
}
int main(){
	lli n;
	scanf("%lld",&n);
	{
		while(n!=-1)
		{
			if(check(n))
				printf("Y\n");
			else
				printf("N\n");			
			scanf("%lld",&n);
		}
	}	
	return 0;
}