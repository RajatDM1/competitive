#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	char s[1000];
	string s1;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string s2;s1=s2="";
		scanf("%s",s);
		int i;i=0;
		map<string,int>mp;
		while(s[i]!='\0')
		{
			if(isalpha(s[i]))
				s1+=s[i]; 
			else
			{

				int n = s[i]-'0';
				s2 = s1;
				mp.insert(make_pair(s1,n));	
				// cout<<mp[s1]<<endl;
				auto it = mp.begin();int j=1;
				while(j<it->second)
				{
					s1 = s1+ it->first;
					j++;
				}		
				mp.erase(s2);
			}
			i++;
		}
		int q,p;
		cin>>q;
		for (int i = 0; i < q; ++i)
		{
			cin>>p; if(p>s1.length())puts("-1"); else cout<<s1[p-1]<<endl;
		}
	}
	return 0;
}
