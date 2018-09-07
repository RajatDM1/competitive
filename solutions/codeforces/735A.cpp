#include<stdio.h>
int b[105],d[105];
int main(){
	int i,s,n,k,t;
	scanf("%d%d",&n,&k);
	char x;
	for(i=1;i<=n;i++){
		scanf(" %c",&x);
		if(x=='G')s=i;
		if(x=='T')t=i;
		if(x=='#')b[i]=1;
	}
	for(i=s;i<=n;i+=k){
		if(b[i])
		break;
		d[i]=1;
	}
	for(i=s;i>=1;i-=k){
		if(b[i])
		break;
		d[i]=1;
	}
	if(d[t])
	printf("YES");
	else
	printf("NO");

}