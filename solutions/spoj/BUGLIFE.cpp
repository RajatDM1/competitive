#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back
int bfs(vector<int> graph[],int n)
{
	int k,i,a,j;
	bool visited[n+1] ={0};
	int color[n+1];
	int flag = 0;
	memset(color, -1 , sizeof(color));
	memset(visited, 0, sizeof(visited));
	// queue <int> q;
	for(int i = 1;i<=n;i++)
	{

		if(visited[i]!=1)
		{
			queue <int> q;
			q.push(i);
			color[i] = 1;

			while(!q.empty())
			{
				
				a = q.front();
				q.pop();
				visited[a]= 1;
				for(int j =0;j<graph[a].size();j++)
				{
					if(color[graph[a][j]]==-1)
						color[graph[a][j]] = !color[a];
					else if(color[graph[a][j]]==color
						[a])
					{
						flag = 1;
						break;
					}
					if(!visited[graph[a][j]])
						q.push(graph[a][j]);
				}
				if(flag)
					break;
			}
		}
		if(flag)
			break;
	}
	return flag;
} 
int main(){
	int t,n,m,a,b;
	scanf("%d",&t);
	int cc= 0;
	while(t--)
	{
		cc++;
		scanf("%d%d",&n,&m);
		vector<int> graph[n+1];
		for(int i =  0; i< m ;i++)
		{
			scanf("%d%d",&a,&b);
			graph[a].pb(b);
			graph[b].pb(a);
		}
		cout<<"Scenario #"<<cc<<":"<<endl;
		if(bfs(graph,n))
         cout<<"Suspicious bugs found!\n";
     	 else
         cout<<"No suspicious bugs found!\n";
	}	
	return 0;
}