#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int level[MAX];
int n;
vector< vector <int> >g;
void bfs(int s){
	int lev = 0;
	// level[MAX] = {0};
	level[s] = lev;
	// cout<<level[s]<<endl;
	queue<int> q;
	q.push(s);
	int vis[MAX]={0};
	vis[s] = 1;
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		// vis[cur] = 1;
		for(vector<int>::iterator it=g[cur].begin();
			it!=g[cur].end();it++)
		{
			if(vis[*it]==0)
			{
				vis[*it] = 1;
				level[*it]=level[cur]+1;
				q.push(*it); 
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		// cout<<"level[%d] "<<i+1<<"is %d"<<level[i]<<endl; 
	}
}
int main(){
	// cout<<"yes"<<endl;
	
	cin>>n;
	g = vector < vector<int>> (n);
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		a-=1;b-=1;
		g[a].pb(b);
		g[b].pb(a);
	}	
	int m=0,idx = -1;
	bfs(0);
	for(int i=0;i<n;i++)
	{
		// m = (level[i]>m?level[i]:m);
		if(level[i]>m)
		{
			m = level[i];
			idx = i;
		}

	}
	bfs(idx);
	m = 0;
	for (int i = 0; i < n; ++i)
	{
		m = (level[i]>m?level[i]:m);
	}
	cout<<m<<endl;
	return 0;
}