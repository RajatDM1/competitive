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
#define lu unsigned long long
int main(){
	unsigned long long t,n,p;
	lu a[MAX];
	// gi(t);
	scanf("%llu",&t);
	while(t--)
	{
		// gi(n);
		scanf("%llu",&n);
		for(lu i=0;i<n;i++)
		{
			scanf("%llu",&a[i]);
		}
		sort(a,a+n);

		scanf("%llu",&p);;int flag = 0;
		for(int i = 0;i<n &&flag==0;i++)
		{
			unsigned long long num = p - a[i];
			unsigned long long j,k;
			for(j=0,k=n-1;j<k; )
			{
				unsigned long long temp = a[j]+a[k];
				if(num == temp && i!=j&&i!=k)
					{flag = 1; break;}
				else if(j==i)
					j++;
				else if(k==i)
					k--;
				else if(temp>num)
						k--;
				else if(temp<num)
						j++;
					
			}
		}
		if(flag)
			{cout<<"YES";pn;}
		else 
			{cout<<"NO";pn;}
	}	

	return 0;
}