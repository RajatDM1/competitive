#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int main(){
	int x,c,i;
	char str[2001];
	int cnt = 1;
	while(1)
	{
		
		x=0;c=0;
		scanf("%s",str);
		if(str[0]=='-')
			break;
		i = 0;
		while(str[i]!='\0')
		{
			if(str[i]=='{')
				c++;
			else if(c>0){
				 c--;
			}
			else{
				c+=1;
				x+=1;
			}
			
			i++;
		}
		c=c/2;
		cout<<cnt++<<". "<<x+c<<endl;
	}	
	return 0;
}