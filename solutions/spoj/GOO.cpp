#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	int t,n;
	cin>>t;
	lli x,y;
	while(t--)
	{
		cin>>n;
		x = (long long)pow(2,n-1);
		y = (x/2)*(n-1)+x;
		printf("%lld %lld\n",x,y);
	}	

	return 0;
}