#include<iostream>
using namespace std;
int main()
{
int i,j,k,n,l;
cin>>n;
for(i=0;i<=n;i++)
{
for(k=2*(n-i)-1;k>0;k--)
cout<<" ";
for(j=0;j<=i;j++)
{
if(j==0&&i==n)
cout<<j;
else
cout<<" "<<j;
}
for(l=0;l<i;l++)
cout<<" "<<i-l-1;
cout<<endl;
}
for(i=0;i<n;i++)
{
for(k=0;k<(2*i)+1;k++)
cout<<" ";
for(j=0;j<n-i;j++)
cout<<" "<<j;
for(l=i+1;l<n;l++)
cout<<" "<<n-l-1;
cout<<endl;
}
return 0;
}
