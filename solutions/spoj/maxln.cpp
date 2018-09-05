#include <bits/stdc++.h>
using namespace std;
int main() {
   int t,caseCount=0;
   double r, s;
   scanf("%d",&t);
   while(t--)
   {
      caseCount++;
      scanf("%lf",&r);   
      
      /*For maximum length, after 
      solving we get this equation for s*/
      s= 0.25 + 4*r*r;
      
      /*To print only two digits after decimal*/
      printf("Case %d: %0.2lf\n",caseCount,s);
   }
   return 0;
}