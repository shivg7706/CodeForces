#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t1=0,t2=1000000;
	cin>>n;
	int *a=new int [n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]<=500000)
			t1=a[i];
		else
		{
			t2=a[i];
			break;
		}
	}
	
	t1=t1-1;
	t2=1000000-t2;
	cout<<max(t1,t2)<<endl;


}