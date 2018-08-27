#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
int main(){
	char str[5002];
	int num,i;
	scanf("%s",str);
	while(str[0]!='0')	
	{
		int len = strlen(str);
		num = 0;
		// printf("%d\n", len);
		lli dp[len+1]={0};
		dp[0]=1;
		for(i =1;i<len;i++)
		{
			// dp[i]=dp[i-1];
			num = (str[i-1]-'0')*10+(str[i]-'0');
			if(str[i]-'0')
			{
				dp[i]=dp[i-1];
			}
			if(num > 9 && num <27)
			{
				if(i==1)
					dp[i]=dp[i]+1;
				else
					dp[i]=dp[i]+dp[i-2];
			}
		}
		printf("%lld\n", dp[i-1]);
		scanf("%s",str);

	}
	return 0;
}