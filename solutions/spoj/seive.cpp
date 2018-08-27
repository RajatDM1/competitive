#include <bits/stdc++.h>
#define size 10
void prime1(bool arr[]){
	int i;
	for(i=2;i*i<size;i++)
	{
		if(arr[i]==1)
		{
			for(int j = 2*i;j<size;j+=i)
			{
				arr[j]=0;
			}
		}
	}
	
}
int main(){
	bool prime[size];
	memset(prime, true, sizeof(prime));
	prime1(prime);
	// prime[0]= 0;
	// prime[1] = 0;
	for(int i=2;i<size;i++)
	{
		if(prime[i]==1)
			printf("%d\n", i);
	}

	return 0;
}
