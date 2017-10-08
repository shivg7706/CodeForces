#include<iostream>
using namespace std;
int main()
{
int i,j,s=0,k=4;
cin>>j;
for(i=3;j>=k;i++)
{
j-=k;
k=((i*(i+1))/2);
s++;
}
cout<<s+1;
}

