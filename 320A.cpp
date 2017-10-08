#include<iostream>
using namespace std;
int main()
{
long long int n;
int a,b,c;
cin>>n;
while(n>0)
{
if(n%10==1)
n/=10;
else if(n%100==14)
	n/=100;
else if(n%1000==144)
	n/=1000;
else 
{
cout<<"NO";
break;
}
}  
if(n==0)
cout<<"YES";
return 0;
}
