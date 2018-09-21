#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	int t;lli n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(floor(sqrt(n))==sqrt(n))
			puts("YES");
		else
			puts("NO");
	}	
	return 0;
}