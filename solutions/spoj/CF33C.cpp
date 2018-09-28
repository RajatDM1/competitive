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
int main(){
	int t,n,i,k,sum,sum1,j;
	gi(t);
	while(t--)
	{
		gi(n);int a[100000]={0};sum=0;
		rep(i,n)
		{
			gi(a[i]);
			sum+=a[i];
		}
		cout<<sum<<endl;
		i=-1;
		sum1 = 0;
		rep(j,n)
		{
			sum1 = sum+(-1*a[j]);
			if(sum1>=sum)
				{i=j;sum = sum1;}
		}
		k=-1;
		sum1=0;
		for(j=n-1;j>i;j--)
		{
			sum1 = sum+(-1*a[j]);
			if(sum1>=sum){k=j;sum=sum1;}
		}
		sum = 0;
		cout<<i<<" "<<k<<endl;
		rep(p,n)
		{
			if(p<i)
				sum+=(a[p]*-1);
			else if(p>=k)
				sum+=(a[p]*-1);
			// cout<<"Inside sum "<<sum<<",";pn;
		}
		// cout<<sum<<endl;
	}	
	return 0;
}