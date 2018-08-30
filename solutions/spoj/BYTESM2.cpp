#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
int a,b;
void Show(int* A)
{
	
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		// int a,b
		cin>>a>>b;
		int A[a+2][b+2];
		int B[a+2][b+2];
		for (int i = 0; i < a+2; ++i)
		{	
			B[i][0]=0;
			B[i][b+1]=0;
		}
		for (int j = 0;j< b+2; ++j)
		{	
			B[0][j]=0;
			B[a+1][j]=0;
		}
		for (int i = 1; i < a+1; ++i)
		{
			for (int j = 1; j <b+1; ++j)
			{
				cin>>A[i][j];
				B[i][j] = A[i][j];
			}
		}
		// for(int i = 0; i< a+2;i++)
		// {
		// 	for(int j=0;j<b+2;j++)
		// 	{
		// 		cout<<B[i][j]<<",";
		// 	}
		// cout<<endl;
		// }
		for (int i = 1; i < a+1; ++i)
		{
			for (int j = 1; j < b+1; ++j)
			{
				B[i][j]+=max(B[i-1][j+1],max(B[i-1][j],B[i-1][j-1]));	
			}
		}
		// for(int i = 0; i< a+2;i++)
		// {
		// 	for(int j=0;j<b+2;j++)
		// 	{
		// 		cout<<B[i][j]<<",";
		// 	}
		// cout<<endl;
		// }
		int max = 0;
		for(int i=0;i<b+2;i++)
		{
			if(B[a][i]>max)
			{
				max = B[a][i];
			}
		}
		cout<<max<<endl;

	}
	return 0;
}