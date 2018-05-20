#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,x,j=0;
	long long int t=0;
	cin>>n>>x;
	int *a=new int [n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(long long int i=x;i>1 && j<n;i--)
		{
			t+=i*a[j];
			j++;
		}

	for(long long int i=j;i<n;i++)
		t+=a[i];
	
	cout<<t<<endl;

}