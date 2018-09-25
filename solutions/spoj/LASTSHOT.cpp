#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
#define mp make_pair
#define ff first 
#define ss second
#define sz size()
#define all(a) a.begin(),a.end()
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
#define fu(i,a,n) for(int i=a;i<=n;i++)
#define fd(i,n,a) for(int i=n;i>=a;i--)
#define gi(n) scanf("%d",&n)
#define gll(n) scanf("%lld",&n);
#define gl(n) cin >> n
#define pi(n) printf("%d",n)
#define pll(n) printf("%lld",n)
#define pl(n) cout << n
#define ps printf(" ")
#define pn printf("\n")
vector <int> g[MAX];
int nc; bool vis[MAX];
void dfs(int n)
{
	vis[n]=1;
	nc++;
	for(int i=0;i<g[n].size();i++)
	{
		if(!vis[g[n][i]])
			dfs(g[n][i]);
	}
}
int main(){
	int m,n,a,b;
	int ans = 0;
	gi(n);gi(m);
	rep(i,m)
	{
		gi(a);gi(b);
		g[a].pb(b);
	}	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			vis[j] = 0;
		nc= 0;
		dfs(i);
		ans = ans>nc?ans:nc;
	}
	pi(ans);pn;
	return 0;
}