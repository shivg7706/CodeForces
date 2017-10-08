#include<iostream>
using namespace std;
int main()
{
int i,n,k,d=0;
cin>>n>>k;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n&&k>0;i++)
{
if(a[i]>8)
	{
	k=k-8;
	d++;
	if(i!=n-1)
	a[i+1]=a[i+1]+a[i]-8;
	}
else
	{
	k=k-a[i];
	d++;
	}
}
if(d>=n&&k>0)
cout<<"-1";
else
cout<<d;
return 0;
}
