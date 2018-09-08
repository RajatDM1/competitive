#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	set<char>ss;
	int n,j,k;cin>>n;
	string s;cin>>s;
	for (int i = 0; i < n; ++i)
		{
			ss.insert(s[i]);
		}	
	k = 26-ss.size();
	j = n-ss.size();
	if(k<j)
		cout<<-1<<endl;
	else
		cout<<j<<endl;
	return 0;
}