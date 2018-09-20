#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int num;
        cin>>num;
        long long int ans=num;
        while(true)
        {
            char ch;
            cin>>ch;
            if(ch=='=')
            break;
            cin>>num;
            if(ch=='/')
            ans/=num;
            else
            if(ch=='*')
            ans*=num;
            else if(ch=='+')
            ans+=num;
            else
            ans-=num;
        }
        cout<<ans<<"\n";
    }
   return 0;
}
 