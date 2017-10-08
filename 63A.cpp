#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int n,i;
cin>>n;
char a[n][11],b[n][11];
for(i=0;i<n;i++)
cin>>a[i]>>b[i];

for(i=0;i<n;i++)
{
if(strcmp(b[i],"rat")==0)
cout<<a[i]<<"\n";
}

for(i=0;i<n;i++)
{
if(strcmp(b[i],"woman")==0||strcmp(b[i],"child")==0)
cout<<a[i]<<"\n";
}

for(i=0;i<n;i++)
{
if(strcmp(b[i],"man")==0)
cout<<a[i]<<"\n";
}

for(i=0;i<n;i++)
{
if(strcmp(b[i],"captain")==0)
cout<<a[i]<<"\n";
}

return 0;
}
