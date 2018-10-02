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
int n;
void rotate(int mat[30][30],int r)
{
	
	while(r--)
	{
	    for (int x = 0; x < n / 2; x++)
	    {
	        for (int y = x; y < n-x-1; y++)
	        {
	            int temp = mat[x][y];
	            mat[x][y] = mat[n-1-y][x];
	            mat[n-1-y][x]=mat[n-1-x][n-1-y];
	            mat[n-1-x][n-1-y]=mat[y][n-1-x];
	            mat[y][n-1-x]=temp;
	        }
	    }
	}
}
int main(){
	ll t;
	gi(n);gll(t);
	int mat[30][30];
	int c = 1;
	rep(i,n)
	{
		rep(j,n)
		{
			mat[i][j] = c++;
		}
	}
	int r = t%4;
	rotate(mat,r);
	switch(r)
	{
		case 0:cout<<"Atef";pn;
		break;
		case 1:cout<<"Sameh";pn;
		break;
		case 2:cout<<"Ameen";pn;
		break;
		case 3:cout<<"Shafeek";pn;
		break;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",mat[i][j]);
		printf("\n");
	}
	return 0;
}