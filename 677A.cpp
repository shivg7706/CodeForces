#include<iostream>
using namespace std;
int main()
{
int i,n,h,s=0;
cin>>n>>h;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
if(a[i]>h)
s+=2;
else
s++;
cout<<s;
}
