#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	int b,np,x,y;
	// int dp[101][501];
	
	while(1)
	{
		scanf("%d%d",&b,&np);
		if(b==0&&np==0) break;
		int dp[np+1][b+1];
		pair<int,int>p[101];
		
		for (int i = 0; i <=np; ++i)
		{
			for (int j = 0; j <=b; ++j)
			{
				dp[i][j] = 0;
			}
		}
		for (int i = 0; i <= np; ++i)
		{
			dp[i][0]= 0;
		}
		for (int i = 0; i <=b; ++i)
		{
			dp[0][i]=0;
		}
		for(int i =0;i<np;i++)
		{
			scanf("%d%d",&x,&y);
			p[i] = (make_pair(x,y));
		}
		for(int i =1 ;i <=np;i++)
		{
			for(int j= 1;j<=b;j++)
			{
				if(p[i-1].first<=j)
					dp[i][j] = max((p[i-1].second + dp[i-1][j-p[i-1].first]),(dp[i-1][j]));
				else 
					dp[i][j] = dp[i-1][j];
			}
		}
		int c = 0;
		int max = dp[np][b];
		for(int i =1;i<=b;i++)
		{
			if(dp[np][i]==max)
				{
					c = i;
					break;
				}
		}
		cout<<c<<" "<<dp[np][b]<<endl;
		// cout<<max<<endl;
	}	
	return 0;
}