#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0;
	long long k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int max=a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]<max)
			{
				c++;
			}
			else
			{
				c=1;max=a[i];
			}

			if(c==k){cout<<max;
				return 0;}
		}
		cout<<max;

}