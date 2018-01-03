#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,m=0,s;
cin>>n>>k;
int a[n],k1=k;
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<k;i++)
m+=a[i];
int z=m;
for(int i=k;i<n;i++)
{
s=a[i]+z-a[i-k];
if(s<m){m=s;k1=i+1;}
z=s;
}
cout<<k1-k+1;
}	
