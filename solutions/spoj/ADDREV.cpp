#include <bits/stdc++.h>
int rev(int x)
{
	int num = 0;
	while(x){
		num = num*10+x%10;
		x=x/10;
	}
	return num;
}
int main(){
	int t,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		printf("%d\n",rev(rev(x)+rev(y)));
	}
}