#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
#define lli long long int
#define VI <vector <int> >
#define pb push_back 
vector<int> primes;
vector<int> lucky;
int arr[3000];
void seive()
{
   for(int i = 0;i<3000;i++)
   {
      arr[i] = 1;
   }
   for(int i = 2;i*i<3000;i++)
   {
      if(arr[i]==1)
      {
         for(int j = 2*i;j<3000;j+=i)
            arr[j] = 0;
      }
   }
   for(int i=2;i<3000;i++)
   {
      if(arr[i] == 1)
         primes.pb(i);
   }
   // for (int i = 0; i < 10; ++i)
   // {
   //    cout<<primes[i]<<",";
   // }
}
int main(){
   seive();
   int c,t,n;
   for(int i=2;i<3000;i++)
   {
      c = 0;
      for(int j= 0;j<primes.size();j++)
      {
         if(i%primes[j]==0)
         {
            c++;
         }
         if(c>=3)
         {
            lucky.pb(i);
            break;
         }
      }
   }
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d",&n);
      cout<<lucky[n-1]<<endl;
   }
   return 0;
}