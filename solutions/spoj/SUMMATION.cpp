#include <bits/stdc++.h>
using namespace std;
#define MAX 1e8+7
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	int t,x,n,total;
	int arr[1000];
	cin>>t;
	int cnt = 1;
	lli sum = 0;
	lli max = 10e8+7;
	while(t--)
	{
		cin>>n;
		sum = 0;
		total = 0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		total = 1<<n;
		for(int i=0;i<total;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i&(1<<j))
					sum+=arr[j];
			}
			sum = sum%max;
		}
		cout<<"Case "<<cnt++<<":"<<sum<<endl;
	}	
	return 0;
}