#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	string str="";
	cout<<str<<endl;
	string s1 = "adbcf";
	cout<<s1<<endl;
	int i=s1.length()-1;
	while(i>=0)
	{
		str.pb(s1[i]);
		i--;
	}
	cout<<str<<",";
	sort(str.begin(),str.end());
	cout<<str<<",";
	reverse(str.begin(),str.end());
	cout<<str<<endl;
	return 0;
}