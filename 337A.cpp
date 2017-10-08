#include<iostream>
using namespace std;
int main()
{
int n,m,i,j,temp,k,min;
cin>>n>>m;
int a[m];
for(i=0;i<m;i++)
cin>>a[i];
for(i=0;i<m;i++)
{
	for(j=0;j<(m-1)-i;j++)
	{
	if(a[j]>a[j+1])
	{	
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
	}
}
min=a[n-1]-a[0];
for(i=1;i<m-n+1;i++)
{
k=a[i+n-1]-a[i];
if(k<min)
min=k;
}
cout<<min;

return 0;
}
