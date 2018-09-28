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
 
typedef long long ll;
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
bool fingerPrint(string s, string t){
	if(t.length() < s.length())
		return false;
	for(int i=s.length() - 1, j = t.length() - 1;i >= 0;i--,j--)
		if(s[i] != t[j])
			return false;
	return true;
}

bool compare(string s, string t){
	for(int i=0,j=0;i<s.length() && j < t.length();i++, j++){
		if(s[i] < t[j])
			return true;
		if(s[i] > t[j])
			return false;
	}
	return (s.length() < t.length());
}

int main(){
	vector<string> v;
	string s, t;
	int test;
	getline(cin, s);
	scanf("%d", &test);
	getline(cin, t);
	while(test--){
		getline(cin, t);
		if(fingerPrint(s, t)){
			v.push_back(t);
		}
	}
	if(v.size() == 0){
		printf("Wrong fingerprints!");
		return 0;
	}
	sort(v.begin(), v.end(), compare);
	cout << v.size() << endl;
	for(int i=0;i<v.size();i++)
		cout << v[i] << endl;
	return 0;
}