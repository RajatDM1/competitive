#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	lli t,sum,x,n;
	cin>>t;
	while(t--)
	{
		sum =0;
		cin>>x;
		n=x;
		sum = n*(n+1)+(n*(n-1)/2);
		sum=sum%1000007;
		cout<<sum<<endl;
	}	
	return 0;
}