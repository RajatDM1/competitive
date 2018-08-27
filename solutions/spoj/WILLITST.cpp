#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
int main(){
	lli t;
	scanf("%lld",&t);
	if((t&(t-1))==0)
		printf("TAK");	
	else
		printf("NIE");
	return 0;
}