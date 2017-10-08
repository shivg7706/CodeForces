#include<iostream>
using namespace std;
int main()
{
int a,b,c,cp=0,d,m=1,l=0;
float n;
cin>>a>>b>>c>>d;

while(l<=100)
{
n=(float)(a+d-b-c+c*m)/a;
if((n-(int)n==0)&&n>0)
{
cout<<d+(m-1)*c;
cp=1;
break;
}
m++;
l++;
}
if(cp==0)
cout<<"-1";
return 0;
}
