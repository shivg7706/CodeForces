#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,a;
cin>>n>>a;
int s[n];
for(int i=0;i<n;i++)
cin>>s[i];
int k=0;
if(a<=n/2+1)
{
	for(int i=0;(a-i)!=-1 ;i++)
	{
		if(s[a-i]==1 && s[a+i]==1)
		{if((a-i)==(a+i))
		k++;
		else k=k+2;}
		
	}
	for(int i=2*a+1;i<n;i++)
	if(s[i]==1)
	k++;
}
else
	{
	for(int i=a,j=0;i<n;i++)
	{
		if(s[i]==1 && s[a-j]==1)
		{if(i==a-j)
		k++;
		else k=k+2;}
		
	}
	for(int i=2*a-1;i>=0;i--)
	if(s[i]==1)
	k++;
	}
cout<<k;
}
