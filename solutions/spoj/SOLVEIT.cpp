#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	int n,q,y,k;
	scanf("%d%d",&n,&q);
	set<int> s;
	while(q--)
	{
		scanf("%d%d",&k,&y);
		if(k==1)
			s.insert(y);
		else
		{
			auto it= s.lower_bound(y);
			if(it == s.end())
				puts("-1");
			else
				printf("%d\n",*it);
		}
	}
	return 0;
}