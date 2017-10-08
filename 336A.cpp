#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
long long int x,y,x1,x2,y1,y2;
cin>>x>>y;
if(x>0)
{
x1=y2=0;
if(y>0)
	x2=y1=(x+y);
else
	{
	x2=x+abs(y);
	y1=(-1)*x2;
	}
}
else
{
y1=x2=0;
if(y<0)
	x1=y2=(x+y);
else
	{
	y2=abs(x)+y;
	x1=(-1)*y2;
	}
}
cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
return 0;
}

