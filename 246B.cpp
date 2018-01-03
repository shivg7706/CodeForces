#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
long long int s=0;
cin>>n;
int *a=new int[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
s+=a[i];
}
if(s%n==0)cout<<n;
else cout<<n-1;
}


