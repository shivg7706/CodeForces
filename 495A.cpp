#include<iostream>
using namespace std;
int main()
{
char a[3];
cin>>a;
int b[2];
for(int i=0;a[i]!='\0';i++)
{
if(a[i]=='2'||a[i]=='0'||a[i]=='6'||a[i]=='9')
b[i]=2;
else if(a[i]=='3'||a[i]=='4')
b[i]=3;
else if(a[i]=='5')
b[i]=4;
else if(a[i]=='1')
b[i]=7;
else if(a[i]=='7')
b[i]=5;
else
b[i]=1;
}
cout<<b[0]*b[1];
}
