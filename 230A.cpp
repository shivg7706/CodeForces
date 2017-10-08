#include<iostream>
using namespace std;
int main()
{
int s,n,i,j,temp,k=0;
cin>>s>>n;
int a[n],b[n];
for(i=0;i<n;i++)
cin>>a[i]>>b[i];
for(i=0;i<n;i++)
{
	for(j=0;j<(n-1)-i;j++)
	{
	if(a[j]>a[j+1])
	{	
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	temp=b[j];
	b[j]=b[j+1];
	b[j+1]=temp;
	}
}
}
for(i=0;i<n;i++)
{
if(s>a[i])
{
s=s+b[i];
k++;
}
else 
break;
}
if(k==n)
cout<<"YES";
else
cout<<"NO";
return 0;
}
