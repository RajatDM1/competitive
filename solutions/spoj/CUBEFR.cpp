#include <bits/stdc++.h>
using namespace std;
#define size 1000000
int mark[size+1];
void sieve()
{
     for(int i=2,k;(k=i*i*i)<=size;++i)
          for(int j=k;j<=size;j+=k)
               mark[j]=-1;
     int countv=1;      
     for(int i=1;i<=size;++i)      
          if(!mark[i])
               mark[i]=countv++;
}
int main() {
     int t,n;
     scanf("%d",&t);
     sieve();
     for(int i=1;i<=t;++i)
     {
          scanf("%d",&n);
          if(mark[n]==-1)
               printf("Case %d: Not Cube Free\n",i);
          else
               printf("Case %d: %d\n",i,mark[n]);
     }
     return 0;
}