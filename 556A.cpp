#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{

long int n,i,m=0,l=0;
cin>>n;
char a[n+1];
cin>>a;
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='1')
m++;
else
l++;
} 
cout<<abs(l-m);
}

