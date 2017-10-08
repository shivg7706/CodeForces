#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int a,b;
long long int n;
cin>>n;
if(n<0)
{
a=abs(n%10);
n=n/10;
b=abs(n%10);
n=n/10;
if(a>b)
n=(n*10)-b;
else
n=(n*10)-a;
}
cout<<n;
return 0;
}

