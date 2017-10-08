#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int n,j,temp,i,s=0,f=0,k=0;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
if(a[i]==0)
f++;
if(a[i]==5)
k++;
}
if(f==0)
{
cout<<"-1";
exit(0);
}
k=k/9;
if(k>0)
{
	k=k*9;
	f=f+k;
	for(i=0;i<f;i++)
	{
	if(i<k)
	a[i]=5;
	if(i>=k)
	a[i]=0;
	}
	for(i=0;i<f;i++)
	cout<<a[i];
}
else
cout<<"0";
return 0;
}

