#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int a[m];
for(int i=0;i<m;i++)
cin>>a[i];
long long int s=a[0]-1;
for(int i=1;i<m;i++)
{
	if(a[i]>=a[i-1])
	s+=a[i]-a[i-1];
	else
	s+=n-a[i-1]+a[i];
}
cout<<s;
return 0;
}
