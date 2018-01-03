#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,b=0;
cin>>n>>m;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int k=m;
for(int i=0;i<n;i++)
{
if(a[i]>=k)
{b++;k=m;}
else
{
a[i+1]+=a[i];
k=k+m;
b++;
}
}
cout<<b;
}
