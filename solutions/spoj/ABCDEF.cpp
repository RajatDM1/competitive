#include <bits/stdc++.h>
using namespace std;
#define MAX 1e8
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	int t;
	cin>>t;
	int arr[101];
	vector<int> m1;vector<int> m2;
	for (int i = 0; i < t; ++i)
		{
			cin>>arr[i];	
		}	
		// for (int i = 0; i < t; ++i)
		// {
		// 	cout<<arr[i];	
		// }	
	for(int a=0;a<t;a++)
	{
		for(int b=0;b<t;b++)
		{
			for(int c=0;c<t;c++)
			{
				m1.push_back(arr[a]*arr[b]+arr[c]);
		
			}
		}
	}
	for(int f=0;f<t;f++)
	{
		for(int e=0;e<t;e++)
		{
			for(int d=0;d<t;d++)
			{
				if(arr[d]==0) continue;
				m2.push_back((arr[f]+arr[e])*arr[d]);
			}
		}
	}

	sort(m1.begin(),m1.end());
	sort(m2.begin(), m2.end());
	lli res = 0;
	for(int i = 0;i<m1.size();i++)
	{
		auto lo = lower_bound(m2.begin(),m2.end(),m1[i])-m2.begin();
		auto hi = upper_bound(m2.begin(), m2.end(),m1[i])-m2.begin();
		res += (hi-lo);
	}
	printf("%lld\n", res);
	return 0;
}