#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
int main(){
	int t,ng,nm,sg,sm,i,j;
	scanf("%d",&t);
	while(t--)
	{
		sg=0,sm=0;
		int g[MAX],m[MAX];
		scanf("%d%d",&ng,&nm);
		for(i=0;i<ng;i++)
		{
			scanf("%d",&g[i]);
			sg+=g[i];
		}
		for(i=0;i<nm;i++)
		{
			scanf("%d",&m[i]);
			sm+=m[i];
		}
		sort(g,g+ng);
		sort(m,m+nm);
		i=0,j=0;
		while(sg!=0&&sm!=0)
		{
			if(g[i]<m[j])
				sg-=g[i++];
			else
				sm-=m[j++];
		}
		if(!sg)
			printf("MechaGodzilla\n");
		else
			printf("Godzilla\n");
	}	
	return 0;
}