#include <bits/stdc++.h>
#include <stack>
using namespace std;
#define MAX 100001
#define lli long long int
void showS(std::stack<int> s)
{
	while(!s.empty())
	{
		printf("s.top is %d\n",s.top());
		s.pop();
	}
}
int check(stack<int>s, int j)
{
	// printf("inside check\n");
	while(!s.empty())
	{
		printf("inside while\n");
		printf("yes\n s.top() %d, j %d\n",s.top(),j);
		if(s.top()==j)
		{
			
			s.pop();
			j++;
		}
		else
			{
				printf("else of check\n");
				return 0;
			}
	}
	return 1;
}
int main(){
	int n,i,t;
	scanf("%d",&n);
	while(n!=0)
	{
		stack<int> s;
		int j=1;
		for(i=0;i<n;i++)
		{
			scanf("%d",&t);
			printf("%d\n",t);
			if(t==j)
				j++;
			if(!s.empty()&&(s.top()==j))
			{
				while(s.top()==j)
				{
					s.pop();
					j++;
				}

			}
			else
				s.push(t);
			printf("value of j is %d\n",j );
			if(!s.empty())
			{
				printf("value of j is %d and s.top() is %d\n",j,s.top());
			}
		}
		showS(s);
		if(check(s,j))
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
		scanf("%d",&n);
	}
	return 0;
}