#include<iostream>
using namespace std;
int main()
{
int a[3],b[3],n,m,l;
cin>>a[0]>>a[1]>>a[2];
cin>>b[0]>>b[1]>>b[2];
cin>>n;
m=a[0]+a[1]+a[2];
l=b[0]+b[1]+b[2];
while(m>0)
{
m=m-5;
n--;
}
while(l>0)
{
l=l-10;
n--;
}
if(n>=0)
cout<<"YES";
else
cout<<"NO";
return 0;
}
