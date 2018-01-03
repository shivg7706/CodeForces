#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,a;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		int k=((pow(2,i)-1)*pow(2,i-1));
		if(n%k==0)
		{
			a=k;
		}
	}
	cout<<a;
}