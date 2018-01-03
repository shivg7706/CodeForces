#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x=1,y=2,z=3,flag=0;
	cin>>n;
	int *a=new int [n];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]==x||a[i]==y)
		{
			if(a[i]==x)swap(y,z);
			else swap(x,z);
			flag=1;
		}
		else {cout<<"NO\n";return 0;}
	}
if(flag)cout<<"YES\n";
return 0;
}	
