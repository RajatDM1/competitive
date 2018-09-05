#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	int a,b,x,c=0;
	scanf("%d%d",&a,&b);
	while(a!=0 && b!=0)
	{
		// int A[a],B[b];
		c =0;
		int min = INT_MAX;
		for (int i = 0; i < a; ++i)
			{
				scanf("%d",&x);
				if(x<min)
					min = x;
			}	
			// cout<<min<<endl;
		// sort(A,A+a);
		for (int i = 0; i < b; ++i)
		{
			scanf("%d",&x);
			if(x<=min)
				c++;
		}
		// cout<<c<<endl;
		// sort(B,B+b);
		if(c<2)
			printf("Y\n");
		else
			printf("N\n");
		scanf("%d%d",&a,&b);
	}
	return 0;
}