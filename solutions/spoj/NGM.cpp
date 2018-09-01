#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	lli n;
	cin>>n;
	if(n%10==0)
	{
		cout<<2<<endl;
	}	
	else
		cout<<1<<endl<<(n%10)<<endl;
	return 0;
}