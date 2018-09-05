#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int gcd(int a,int b)
{
	if(a==0||b==0)
		return 0;
	if(a==b)
		return a;
	if(a>b)
		return gcd(a-b,b);
	return gcd(a,b-a);
}
void check(int x)
{
	int i,c;
	c=0;
	for(i = 1;i<=x;i++)
	{
		if(gcd(i,x)==1)
			c++;
	}
	printf("%d\n",c);
}
int main(){
	int t;
	lli x;
	cin>>t;
	while(t--)
	{
		scanf("%lld",&x);
		check(x);
	}	
	return 0;
}