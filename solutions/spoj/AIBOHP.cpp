#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int dp[6101][6101];

int max1(int a, int b)
{
	return a>b?a:b;
}
int main(){
	char a[6101];
	lli t;
	scanf("%lld",&t);
	while(t--){
		scanf("%s",a);
	// scanf("%s",b);
	int m = strlen(a);
	// int n = strlen(b);
	char *rev = new char[m+1];
	int j=0;
	for(int i = m-1;i>=0;i--)
	{
		rev[j]=a[i];j++;
	}
	// cout<<"rev "<<rev<<endl;
	rev[m]='\0';
	// printf("%s\n",rev);
	// for(int i = 0; i< m+1;i++)
	// 	dp[i][0]=0;
	// for (int i = 0; i < m+1; ++i)
	// 	{
	// 		dp[0][i]=0;
	// 	}	
	for (int i = 0; i <m+1; ++i)
	{
		for(int j = 0;j<m+1;j++)
		{
			if(i==0 || j==0)
				dp[i][j] = 0;
			else if(a[i-1]==rev[j-1])
				dp[i][j] = 1+dp[i-1][j-1];
			else
				dp[i][j] = max1(dp[i-1][j],dp[i][j-1]);	
		}
	}
	// cout<<dp[m][m]<<endl;	
	cout<<m-dp[m][m]<<endl;
	}
	return 0;
}