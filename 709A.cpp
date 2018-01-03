#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,b,d,s=0,k=0;
cin>>n>>b>>d;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<n;i++)
{
	if(a[i]<=b)
	{	
		
		s+=a[i];
		if(s>d)
		{
		k++;
		s=0;}
	}
}
cout<<k;
}
