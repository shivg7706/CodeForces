#include<iostream>
using namespace std;
int main()
{
int k=0,n,i,max,min;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
max=min=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
k++;
}
if(a[i]<min)
{
min=a[i];
k++;
}
}
cout<<k;
return 0;
} 
