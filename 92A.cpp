#include<iostream>
using namespace std;
int main()
{
int n,j,m,s=0,i,k;
cin>>n>>m;
s=(n*(n+1))/2;
k=(m/s);
for(j=0;j<=k;j++)
{
for(i=1;i<=n;i++)
{
if(m>=i)
m=m-i;
else
break;
}
}
cout<<m;
return 0;
}
