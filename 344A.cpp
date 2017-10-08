#include<iostream>
using namespace std;
int main()
{
long int n;
cin>>n;
int a[n],b,i;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++)
	if(a[i]!=a[i+1])
	b++;
cout<<b+1;
}
