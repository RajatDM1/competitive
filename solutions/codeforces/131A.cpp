#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
void change(string& s)
{
	// if(s[0]-'a'<0)
	// 	s[0]+=32;
	for(int i = 0;s[i];i++)
	{
		if(s[i]-'a'<0)
			s[i]+=32;
	}
	cout<<s<<endl;

}
int main(){
	int i,c = 0;
	string s;
	cin>>s;
	int len = s.length();
	for(i = 0;s[i];i++)
	{
		if(s[i]-'a'<0)
			c++;
	}
	if(c==len)
	{
		for(int i = 0;i<len;i++)
		{
			s[i]+=32;
		}
	}
	else if(s[0]-'a'>=0 && c==(len-1))
		{
			s[0]-=32;
			for(int i = 1;i<len;i++)
			{
				s[i]+=32;
			}		
		}
	cout<<s<<endl;
	return 0;
}