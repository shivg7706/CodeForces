#include<bits/stdc++.h>

using namespace std;
int main()
{
	long long int n,m,c1=0,c2=0,k;
	cin>>n;
	int *a=new int [n];
	int *b=new int [n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]-1]=i+1;
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>k;
		c1+=b[k-1];
		c2+=n-b[k-1]+1;
	}	
	cout<<c1<<" "<<c2<<endl;

}