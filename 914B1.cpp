#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	int *a=new int [n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int k=a[n-1];
	for(int i=n-1;i>=0;i--)
		if(k==a[i])c++;
	if(c%2)cout<<"Canon\n";
	else cout<<"Agasa\n";
}