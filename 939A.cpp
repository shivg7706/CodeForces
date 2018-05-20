#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *a=new int [n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(i+1==a[a[a[i]-1]-1])
			{cout<<"YES\n";return 0;}
	}
	cout<<"NO\n";
}
