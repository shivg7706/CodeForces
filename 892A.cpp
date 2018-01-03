#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
long long int a[n],b[n],s=0;
for(int i=0;i<n;i++)
{
cin>>a[i];
s+=a[i];}

for(int i=0;i<n;i++)
cin>>b[i];
sort(b,b+n);
if(s<=b[n-1]+b[n-2])
cout<<"YES";
else
cout<<"NO";
return 0;
}


