#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++)
{
	cin>>a[i]>>b[i];
}



for(int i=0;i<n-1;i++)
{
	if((a[i]>a[i+1]&&b[i]<b[i+1])||(a[i]<a[i+1]&&b[i]>b[i+1]))
	{
		cout<<"Happy Alex";
		return 0;
	}
}
if((a[0]>a[n-1]&&b[0]<b[n-1])||(a[0]<a[n-1]&&b[0]>b[n-1]))
{
	cout<<"Happy Alex";
	return 0;
}
cout<<"Poor Alex";
return 0;
}