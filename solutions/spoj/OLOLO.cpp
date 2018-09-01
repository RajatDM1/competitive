#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	lli t,x,num=0;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&x);
		num = num^x;
	}	
	printf("%lld\n",num);
	return 0;
}