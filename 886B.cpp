#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int p=*max_element(a,a+n);
int b[p+1]={0};
for(int i=n-1;i>=0;i--)
{
	if(b[a[i]]==0)
	b[a[i]]=n-i;
	else 
	{
	if((n-i)<b[a[i]])
	b[a[i]]=n-i;
	}
}
int q=0,m=b[0];
for(int i=1;i<p+1;i++)
{
if(b[i]>m)
{q=i;m=b[i];}
}
cout<<q;
}
