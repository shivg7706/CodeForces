#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,l;
	cin>>n>>k;
	int *a=new int [n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(int i=n-1;i>=0;i--)
		if(k%a[i]==0)
			{l=a[i];break;}
	cout<<k/l<<endl;

}