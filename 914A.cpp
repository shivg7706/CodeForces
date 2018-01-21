#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	float t;
	cin>>n;
	int *a=new int [n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(int i=n-1;i>=0;i--)
	{
		t=sqrt(a[i]);
		if(t-(int)t!=0)
			{cout<<a[i]<<endl;return 0;}
	}
}