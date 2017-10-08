#include<iostream>
using namespace std;
int main()
{
int a[4],s=0,i;
cin>>a[0]>>a[1]>>a[2]>>a[3];
char b[100001];
cin>>b;
for(i=0;b[i]!='\0';i++)
{
if(b[i]=='1')
s=s+a[0];
else if(b[i]=='2')
s=s+a[1];
else if(b[i]=='3')
s=s+a[2];
else if(b[i]=='4')
s=s+a[3];
}
cout<<s;
return 0;
}
 
