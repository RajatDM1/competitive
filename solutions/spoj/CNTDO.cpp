#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	int t,n,c,x;
	cin>>t;
	
	while(t--)
	{
		cin>>n;c=0;
		multiset<int> s;
		for (int i = 0; i < n; ++i)
		{
			cin>>x;
			s.insert(x);
		}
		for(auto it = s.begin(); it!=s.end();it++)
		{
			if(find(it,s.end(),2*(*it))!=s.end()) c++;
		}
		cout<<c<<endl;

	}	
	return 0;
}