#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];


	for(int i=1;i<n-1;i++)
	{
		if(a[i]<a[i-1] && a[i]<a[i+1])
			k++;
		if(a[i]>a[i-1] && a[i]>a[i+1])
			k++;
	}
	cout<<k;
	return 0;

}