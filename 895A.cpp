#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0,c=1;
	cin>>n;
	int *a=new int [n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		s+=c*a[i];
		c*=-1;
	}
	cout<<abs(s);

}