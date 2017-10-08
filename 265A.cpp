#include<iostream>
using namespace std;
int main()
{
int i,j=0;
char a[51],b[51];
cin>>a>>b;
for(i=0;b[i]!='\0';i++)
{
if(a[j]==b[i])
j++;
}
cout<<j+1;
}

