#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
void rev(char word[], int size)
{
	char* word2 =word;
	for (int i = 0, k = size; i < size; i++, k--) {
    word[k] = word2[i];
}
}
void sub(char total[], char ke[],int st, int ske)
{
	total = rev(total,st);
	keR = rev(ke,ske);
}
int main(){
	int t,st,ske;
	scanf("%d",&t);
	char total[101],ke[101];
	while(t--)
	{
		scanf("%s%s",total,ke);
		// printf("%s%s\n",total,ke);
		int st = sizeof(total);
		int ske = sizeof(ke);
		sub(total, ke,st,ske);

	}
			
	return 0;
}