#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int n,h,i,j,s;
cin>>n;
char a[n+2],b[n+2];
cin>>a;
h=strlen(a);
if(h%2==0)
s=1;
else
s=0;
for(i=h/2,j=0+s;i<h;i++,j=j+2)
b[i]=a[j];
b[i]='\0';
for(i=0,j=h-2;i<h/2;i++,j=j-2)
b[i]=a[j];
cout<<b;
return 0;
}
