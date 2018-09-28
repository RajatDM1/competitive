        //not my tamplate
#include <vector> 
#include <queue>
#include <map> 
#include <set>
#include <utility> //Pair
#include <algorithm>
#include <sstream> // istringstream>> ostring stream<<
#include <iostream> 
#include <iomanip> 
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 << endl; prints xxx77
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cassert>
#include <fstream>
#include <limits>
using namespace std;
 
typedef long long lli;
typedef vector <int> vi;
typedef pair< int ,int > pii;
typedef istringstream iss;
typedef ostringstream oss;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz size()
#define ln length()
#define rep(i,n) for(int i=0;i<n;i++)
#define fu(i,a,n) for(int i=a;i<=n;i++)
#define fd(i,n,a) for(int i=n;i>=a;i--)
#define all(a)  a.begin(),a.end() 
 
#define gi(n) scanf("%d",&n)
#define gll(n) scanf("%lld",&n);
#define gl(n) cin >> n
#define pi(n) printf("%d",n)
#define pll(n) printf("%lld",n)
#define pl(n) cout << n
#define ps printf(" ")
#define pn printf("\n")
#define dg(n,s); printf("%s %d",s,n)
#define imax numeric_limits<int>::max()
#define imin numeric_limits<int>::min()
#define lmax numeric_limits<ll>::max()
#define lmin numeric_limits<ll>::min()
 
const int N=100005;
long long int lazy[4*N];
long long int seg[4*N];
lli arr[4*N];

 
void build(int low,int high,int node)
{
    if(low>high)
    return;
    if(low == high)
    {
        seg[node]=arr[high];
        return;
    }
    int mid = low+high>>1;
    build(low,mid,2*node+1);
    build(mid+1,high,2*node+2);
    seg[node]=seg[2*node+1]+seg[2*node+2];
}

 
long long int query(int low,int high,int lq,int hq,int node)
{
    if(low>hq || high<lq)
    return 0;
    if(lq<=low && high<=hq)
    {
        return seg[node];
    }
    int mid=low+high>>1;
   return query(low,mid,lq,hq,2*node+1)+query(mid+1,high,lq,hq,2*node+2);
}
int main(){
    int n,q,a,b;
    scanf("%d",&n);
    rep(i,n)
    {
        gll(arr[i]);
    }
    // rep(i,n){printf("%lli\n",(arr[i]));}
        memset(seg,0,sizeof(seg));
        build(0,n-1,0);
    // rep(i,n+1){printf("%lli\n",(seg[i]));}        
        gi(q);
        while(q--)
        {
            cin>>a>>b;
            printf("%lld\n",query(0,n-1,a-1,b-1,0));
        }
         
    
    return 0;
     
}