#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
void showArr(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<",";
	}
	cout<<endl;
}
int main(){
	int count;
	cin>>count;
	int a[MAX];
	for (int i = 0; i < count; ++i)
		{
			cin>>a[i];
		}	
		cout<<endl;
	showArr(a,count);
	cout<<endl;
	return 0;
}