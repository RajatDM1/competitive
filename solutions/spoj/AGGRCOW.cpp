#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define MAX 100001
#define lli long long int
lli n,c;
int test(int num, int arr[])
{
    int pos = arr[0];int cows = 1;
    for(int i = 1;i<n;i++)
    {
        if(arr[i]-pos>=num)
        {
            pos = arr[i];
            cows++;
            if(cows == c)
                return 1;
        }
    }
    return 0;
}
int bs(int arr[],int n)
{
    int ini=0, last = arr[n-1];
    int max = -1;
    while(last>ini)
    {
        int mid = (last+ini)/2;
        
        if(test(mid,arr)==1)
        {
            max = mid;
            ini = mid+1;
        }
        else
            last = mid;
    }
    return max;
}
int main(){
    lli t;int arr[MAX];int i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&c);
        
        for(i = 0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+n);
        int k = bs(arr,n);
        printf("%d\n",k);
    }   
    return 0;
}