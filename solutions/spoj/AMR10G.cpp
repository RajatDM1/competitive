#include <bits/stdc++.h>
using namespace std;
int main() {
   int t,n,k;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d%d",&n,&k);
      
      int arr[n];
      for(int i=0;i<n;++i)
         scanf("%d",&arr[i]);
      sort(arr,arr+n);
      
      int diff=INT_MAX;
      for(int i=0 ; i<=n-k ;++i)
         if(diff>arr[i+k-1]-arr[i])
            diff=arr[i+k-1]-arr[i];
      printf("%d\n",diff);
   }
   return 0;
}