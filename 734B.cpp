#include<iostream>
using namespace std;
int main()
{
int i,min;
long long int k2,k3,k5,k6,s=0;
cin>>k2>>k3>>k5>>k6;
if(k2<k5)
	{
	if(k2<k6)
	min=k2;
	else
	min=k6;
	}
else
	{
	if(k5<k6)
	min=k5;
	else
	min=k6;
	}
for(i=0;i<min;i++)
s=s+256;
k2=k2-min;
if(k2<k3)
min=k2;
else
min=k3;
for(i=0;i<min;i++)
s=s+32;
cout<<s;
return 0;
}

