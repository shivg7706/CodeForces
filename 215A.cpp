#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int i,j,l=0,n,m,k=0;
float f;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
cin>>m;
int b[m];
for(i=0;i<m;i++)
cin>>b[i];
int c[n*m];
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
	f=(float)b[j]/a[i];
	if(f-(int)f==0)
	{	
	c[k]=(int)f;
	k++;	
	}
	}
}
sort(c,c+k);
for(i=k-2;i>=0;i--)
{if(c[i]==c[k-1])
l++;
else
break;}
cout<<l+1;
return 0;
}
