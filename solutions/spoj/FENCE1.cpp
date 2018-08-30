#include <bits/stdc++.h>
using namespace std;
int main() {
     int num;
     scanf("%d",&num);
     while(num)
     {
          float res=0;
          res=(1/2.0)*(num*num)*(1/3.1415926);
          printf("%.2f\n",res);
          scanf("%d",&num);   
     }
     return 0;
}