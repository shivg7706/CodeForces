#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int n,m,s=0,i,temp,j;
cin>>n>>m;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
	for(j=0;j<(n-1)-i;j++)
	{
	if(a[j]>a[j+1])
	{	
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
	}
}
i=0;
while(a[i]<0&&i<m)
{
s+=a[i];
i++;
}
cout<<abs(s);

return 0;
}
