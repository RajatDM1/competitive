#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
void showArr(int a[], int n)
{
	for (int i = 1; i <=n; ++i)
	{
		cout<<a[i]<<",";
	}
	cout<<endl;
}
int main(){
	int t,n,flag;
	cin>>n;
	while(n!=0)
	{
		flag = 0;
		int a[MAX],a1[MAX];
		for (int i = 1; i <=n; ++i)
		{
			cin>>a[i];
		}
		// showArr(a,n);
		for (int i = 1; i <=n; ++i)
		{
			a1[a[i]] = i;
		}
		// showArr(a1,n);
		for (int i = 1; i <=n; ++i)
		{
			if(a[i]!=a1[i])
				flag = 1;
		}
		if(flag)
			cout<<"not ambiguous"<<endl;
		else
			cout<<"ambiguous"<<endl;
		cin>>n;
	}	
	return 0;
}