#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
int main(){
	int t,arr[MAX],sum,i,st,fr,j;
	scanf("%d",&t);
	j=1;
	while(t--){
		scanf("%d%d",&st,&fr);
		for(i=0;i<fr;i++)
		{
			scanf("%d",&arr[i]);
		}
		sort(arr,arr+fr);
		sum = 0;
		for(i=fr-1;i>=0;i--)
		{
			sum+=arr[i];
			if(sum>=st)
				break;
		}
		printf("Scenario #%d:\n",j++);
		if(sum<st)
			printf("impossible\n");
		else
			printf("%d\n", fr-i);

	}
	return 0;
}