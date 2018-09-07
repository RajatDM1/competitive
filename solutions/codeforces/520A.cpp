#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	int occ[26]={0};
	int n,flag=0;
	cin>>n;
	cin.ignore();
	string s;
	getline(cin,s);
	// cin>>s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	// cout<<s<<endl;
	for(int i =0 ;i<n;i++)
	{
		occ[s[i]-'a']++;
	}	
	int i=0;
	while(i<26)
	{
		// cout<<s[i]<<",";
		if(occ[i++]==0)
			{
				// cout<<s[i]<<endl;
				flag = 1;
			}
	}
	flag?cout<<"NO":cout<<"YES";
	return 0;
}