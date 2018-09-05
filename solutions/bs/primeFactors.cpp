#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int x,c,n;
		c = 0;
		cin>>x;
		n = x;
		while(x%2==0)
		{
			cout<<"2 "; c++; x/=2;
		}
		for(int i = 3;i*i<=n;i+=2)
		{
			while(x%i==0)
			{
				c++;
				cout<<i<<" ";
				x/=i;
			}
		}
		if(!c && x>2)
			cout<<x<<endl;
		cout<<endl;
	}
	return 0;
}