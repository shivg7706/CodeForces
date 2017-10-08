#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n],s=0,m=0,i;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
s+=a[i];
for(i=1;i<6;i++)
{
if((s+i)%(n+1)!=1)
m++;
}
cout<<m;
return 0;
}

