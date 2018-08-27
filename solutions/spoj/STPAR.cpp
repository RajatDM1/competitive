#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
int main(){
	int n,i,j,flag,t;
	stack<int> s;
	while(1)
	{	
		flag = 1,j=1;
		scanf("%d",&n);
		if(n==0)
			break;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&t);
			if(t!=j)
				{
					s.push(t);
					printf("pushed %d in stack\n",t);
					// show(s);
				}
			else{
				j++;
				if(!s.empty())
				{
					while(s.top() == j)
					{
						j++;
						printf("poped out of stack %d\n",s.top());
						s.pop();
						// show(s);
					}
				}
			}
		}
		while(!s.empty())
		{
			if(s.top()!=j)
				flag = 0;
			s.pop();
			j++;
		}
		if(flag)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}