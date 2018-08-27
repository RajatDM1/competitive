#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,flag,j,x,i;
	scanf("%d",&n);
	while(n!=0)
	{
		stack<int> s;j=1;
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
			if(x==j)
			{
				j++;
				while(!s.empty()&&s.top()==j)
				{
					s.pop();
					j++;
				}
			}else
			{
				s.push(x);
			}
		}
		while(!s.empty())
		{
			if(s.top()!=j)
				break;
			s.pop();j++;
		}
		// cout<<"value of j"<<j<<endl;
		if(j==n+1)
			printf("yes\n");
		else
			printf("no\n");
		scanf("%d",&n);
	}	
	return 0;
}