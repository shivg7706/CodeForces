#include<iostream>
using namespace std;
int main()
{
int n,c=0,i,m=0,l=0;
cin>>n;
int a[n],x,y;
x=0;
y=n-1;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
	if(a[x]>a[y])
	{
		if(c==0)
		{
		m+=a[x];
		c=1;
		}
		else
		{
		l+=a[x];
		c=0;
		}
	x++;
	}
	else
	{
		if(c==0)
		{
		m+=a[y];
		c=1;
		}
		else
		{
		l+=a[y];
		c=0;
		}

	y--;
	}
}
cout<<m<<" "<<l;
}
