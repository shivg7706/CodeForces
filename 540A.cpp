#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int n,i,a;
string s1,s2;
int c=0;
cin>>n;
cin>>s1>>s2;
for(i=0;i<n;i++)
{
a=abs(s1[i]-s2[i]);
if(a>5)
a=10-a;
c+=a;
}
cout<<c;
}

