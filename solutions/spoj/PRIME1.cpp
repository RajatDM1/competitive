#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
void pri(std::vector<int>& v){
	bool isprime[MAX];
	memset(isprime, true, sizeof(isprime));
	for (int i = 2; i*i < MAX; ++i)
	{
		if(isprime[i])
			for (int j = i*i; j < MAX; j+=i)
			{
				isprime[j]=0;
			}
	}
	v.push_back(2);
	for(lli i = 3; i<MAX; i+=2)
	{
		if(isprime[i])
		{
			v.push_back(i);
		}
	}

}
void printprimes(lli n, lli m, std::vector<int> v)
{
	bool isprime[m-n+1];
	memset(isprime, true, sizeof(isprime));
	for(lli i =0 ; v[i]*v[i]<=m;i++)
	{
		lli cur = v[i];
		lli low = (n/cur)*cur;
		if(low<n)
			low = low+cur;
		if(n==1)
		{
			isprime[0] = false;
		}
		for(lli j= low; j<=m;j+=cur)
		{
			isprime[j-n] = false;
		}
		if(low == cur)
		{
			isprime[low-n] = true;
		}
	}
	
	// int count= 0;
	for (lli i = 0; i<=m-n; ++i)
	{
		if(isprime[i]==true)
		{
				printf("%lli\n",i+n );
				// count++;
			
		}
	}
	// printf("%d\n",count );
}
int main(){
	lli t,n,m;
	scanf("%lld",&t);
	std::vector<int> v;
	pri(v);
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		printprimes(n,m,v);
	}
	return 0;
}