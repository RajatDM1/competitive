		//not my tamplate
#include <vector> 
#include <queue>
#include <map> 
#include <set>
#include <utility> //Pair
#include <algorithm>
#include <sstream> // istringstream>> ostring stream<<
#include <iostream> 
#include <iomanip> 
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 << endl; prints xxx77
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cassert>
#include <fstream>
#include <limits>
using namespace std;
 
typedef long long ll;
typedef vector <int> vi;
typedef pair< int ,int > pii;
typedef istringstream iss;
typedef ostringstream oss;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz size()
#define ln length()
#define rep(i,n) for(int i=0;i<n;i++)
#define fu(i,a,n) for(int i=a;i<=n;i++)
#define fd(i,n,a) for(int i=n;i>=a;i--)
#define all(a)  a.begin(),a.end() 
 
#define gi(n) scanf("%d",&n)
#define gll(n) scanf("%lld",&n);
#define gl(n) cin >> n
#define pi(n) printf("%d",n)
#define pll(n) printf("%lld",n)
#define pl(n) cout << n
#define ps printf(" ")
#define pn printf("\n")
#define dg(n,s); printf("%s %d",s,n)
#define imax numeric_limits<int>::max()
#define imin numeric_limits<int>::min()
#define lmax numeric_limits<ll>::max()
#define lmin numeric_limits<ll>::min()
//number of ways to reach from upper left corner in matrix mXn to a the lower right corner
void path(int r,int c)
{
	int p[r][c];
	for(int i =0;i<r;i++){
		p[i][0] = 1;
	}
	for(int j=0;j<c;j++)
	{
		p[0][j] = 1;
	}
	for(int i=1;i<r;i++)
	{
		for(int j=1;j<c;j++)
		{
			p[i][j] = p[i-1][j]+p[i][j-1];
		}
	}
	cout<<p[r-1][c-1];pn;

	// rep(i,r)
	// {
	// 	rep(j,c)
	// 	{
	// 		cout<<p[i][j]<<" ";
	// 	}
	// 	pn;
	// }
}
int main(){
	int t,r,c;
	gi(t);
	while(t--)
	{
		cin>>r>>c;
		path(r,c);
	}	
	return 0;
}