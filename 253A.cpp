#include<iostream>
using namespace std;
int main()
{
int n,j,i,m;
cin>>n>>m;
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
char a[202];
if(m<n)
{
for(i=0;i<2*m;i+=2)
{
a[i]='B';
a[i+1]='G';
}
for(j=i;j<(i+n-m);j++)
a[j]='B';
a[j]='\0';
}
else
{
for(i=0;i<2*n;i+=2)
{
a[i]='G';
a[i+1]='B';
}
for(j=i;j<i+m-n;j++)
a[j]='G';
a[j]='\0';
}
cout<<a;
}