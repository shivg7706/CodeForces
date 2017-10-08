#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int n,i;
cin>>n;
long long int a[n],s=0;
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
for(i=0;i<n-1;i++)
s=s+a[n-1]-a[i];
cout<<s;
}



