#include<iostream>
using namespace std;
int main()
{
int i,j,k,l,n,a;
cin>>n;
for(i=1,j=(n*n);i<=n;i++,j--)
{	a=0;
	for(k=i,l=j;a<n/2;k+=n,l-=n)
	{
	cout<<k<<" "<<l<<" ";
	a++;
	}
cout<<endl;
}
return 0;
}
