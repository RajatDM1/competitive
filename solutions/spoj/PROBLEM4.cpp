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
vector <int> p;int ans = 1;
set<int> s1;
void seive()
{
	bool prime[1000];
	rep(i,1000){prime[i] = 1;}
	fu(i,2,sqrt(1000))
	{
		if(prime[i]==1)
			for(int j=2*i;j<=1000;j+=i)
				{prime[j] = 0;}
	}
	fu(i,2,1000)
	{
		if(prime[i])
			p.pb(i);
	}
}
void check(int i,int n)
{
	set<int> s;
	fu(j,1,n-1)
	{
		int num = pow(i,j);
		num=num%n;
		if(s.find(num)!=s.end())
			{
				for(auto it: s){cout<<it<<",";}
				cout<<"returning "<<i<<",";return;}
		s.insert(num);
	}
	// auto it = s.begin();
	// for(auto e: s){cout<<e<<",";}
	s1.insert(i);
	ans = (ans*i)%n;
}
int gcd(int a,int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}
int main(){
	int t,n,flag=1,c=0;
	seive();
	gi(t);
	// auto it = p.begin();
	// for(auto e: p){ cout<<e<<",";}
	while(t--)
	{
		flag = 1;s1.erase(s1.begin(),s1.end());
		c++;
		gi(n);
		auto it = p.begin();
		while(it!=p.end())
		{
			if(*it==n)
				{flag = 0; break;}
			it++;
		}
		ans = 1;
		fu(i,2,n-1)
		{
			if(gcd(i,n)==1)
				check(i,n);
		}
		pn;
		for(auto e:s1){cout<<e<<",";}
		if(flag)
			cout<<c<<":"<<"NOTPRIME"<<endl;
		else
			cout<<c<<":"<<ans<<endl;
	}
	return 0;
}