#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int i,l,b,h;
float t1,t2,t3,ar;
cin>>t1>>t2>>t3;
ar=sqrt(t1*t2*t3);
l=ar/t1;
b=ar/t2;
h=ar/t3;
cout<<4*(l+b+h);
return 0;
}
