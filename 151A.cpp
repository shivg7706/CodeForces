#include<iostream>
using namespace std;
int main()
{
int n,l,k,c,d,p,nl,np,x,y,z,max;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
x=(k*l)/nl;
y=p/np;
z=c*d;
if(x<y)
{	if(x<z)
	max=x;
	else
	max=z;
}
else
{
	if(y<z)
	max=y;
	else
	max=z;
}
cout<<max/n;
return 0;
}
