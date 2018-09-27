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
#define llu unsigned long long
int gcd(llu a,llu b)
{
	if(a==0)
		return b;
	return(b%a,a);
}
int main(){
		int t,n;
		llu k,x; llu a[MAX];
		gi(t);
		while(t--)
		{
			int flag = 0;
			scanf("%d%llu",&n,&k);
			rep(i,n)
			{
				scanf("%llu",&a[i]);
			}
			llu res = a[0];llu gcd1=res;
			for(int i = 1;i<n;i++)
			{
				gcd1=gcd(res,a[i]);
			}
			// cout<<"gcd1 "<<gcd1;pn;
			for(x=k;x>0;x--)
			{
				if(x%gcd1==0)
					{flag = x; break;}
			}
			if(flag)
				cout<<x<<endl;
			else
				cout<<"0"<<endl;
		}
	return 0;
}