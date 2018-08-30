#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
int bit[MAX];
int n;
void show()
{
	int i;
	// cout<<"show called";
	for ( i = 0; i < n; ++i)
	{
		cout<<bit[i]<<",";
	}
	// cout<<i<<" "<<n<<endl;
	cout<<endl;
}
int query(int x)
{
	lli sum=0;
	for(;x>0;x-=x&-x)
		{
			// cout<<"value of bit[%d]"<<x<<" "<<bit[x]<<endl;
			sum+=bit[x];
		}
	return sum;
}
void update(int x,int delta)
{
	for(;x<=n;x+=x&-x)
		bit[x]+=delta;
}

int main(){
	int t,i,d;
	int a[MAX],b[MAX];
	cin>>t;
	while(t--)
	{
		
		
		scanf("%d",&n);
		for(i=0;i<n;i++)
			bit[i]=0;
		// show();
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[i]= a[i];
		}
		sort(b,b+n);
		for ( i = 0; i < n; ++i)
		{
			d = lower_bound(b,b+n,a[i])-b;
			a[i] = d+1;
		}
		lli sum = 0;
		for(i=n-1;i>=0;i--)
		{
			sum+=query(a[i]-1);
			update(a[i],1);
			// show();
		}
		cout<<sum<<endl;
	}	
	return 0;
}