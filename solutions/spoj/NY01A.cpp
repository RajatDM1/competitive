#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	int tc,n;
    string s;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        map<string, int>mp;
        cin>>s;
        for(int i=2;i<40;i++)
        {
            string tmp="";
            tmp+=s[i-2];
            tmp+=s[i-1];
            tmp+=s[i];
            mp[tmp]++;
        }
        cout<<n<<" ";
        cout<<mp["TTT"]<<" "<<mp["TTH"]<<" "<<mp["THT"]<<" "<<mp["THH"]<<" "<<mp["HTT"]<<" "<<mp["HTH"]<<" "<<mp["HHT"]<<" "<<mp["HHH"]<<"\n";
    }
	
	return 0;
}