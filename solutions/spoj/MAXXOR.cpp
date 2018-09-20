#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	int a,b,ans,i,j;
	int arrl[32]={0};
	int arrr[32]={0};
	j=0;
	cin>>a;cin>>b;
	for(int i = 31;i>=0;i--)
	{
		int k = a>>i;
		if(k & 1)
			arrl[i] = 1;
		else
			arrl[i] = 0;
	}
	
	for(int i = 31;i>=0;i--)
	{
		int k = b>>i;
		if(k & 1)
			arrr[i] = 1;
		else	
			arrr[i] = 0;
	}

	
		for(i=31;i>=0;i--)
		{
			if(arrr[i]!=arrl[i])
				break;
		}
		ans = 1<<(i+1);
	cout<<ans-1;
	return 0;
}