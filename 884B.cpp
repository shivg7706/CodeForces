#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,x,k,a=0;
cin>>n>>x;
for(int i=0;i<n;i++)
{
	cin>>k;
	x-=k;
}
if(x==n-1)
cout<<"YES";
else cout<<"NO";
}
