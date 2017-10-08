#include<iostream>
using namespace std;
int main()
{
int n,a,b,k;
cin>>n>>a>>b;
k=n-a;
if(k>b)
k=b+1;
cout<<k;
return 0;
}
