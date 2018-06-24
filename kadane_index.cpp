#include <iostream>
using namespace std;
int max(int arr[],int n)
{
	int max, maxg,start, end;
	maxg = max = arr[0];
	for (int i = 1; i < n; ++i)
	{
		// max = max > max +arr[i]?max:max+arr[i];
		max = max+arr[i];
		if(max<0)
			{
				max = 0;
				start = i+1;
			}
		if(maxg < max)
		{
			maxg=max;
			end = i;
		}

	}
	printf("%d , %d \n",start,end);
	return maxg;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	// n = 8;
	//int arr[n]={-2, -3, 4, -1, -2, 1, 5, -3};
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<",";
	}
	cout<<endl;
	printf("%d\n", max(arr,n));
}