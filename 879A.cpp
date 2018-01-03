#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n][2];
for(int i=0;i<n;i++)
cin>>a[i][0]>>a[i][1];
int k=a[0][0];
for(int i=1;i<n;i++)
{

	while(a[i][0]<=k)
	{
	a[i][0]+=a[i][1];
	}
k=a[i][0];
}
cout<<k;
return 0;
}
