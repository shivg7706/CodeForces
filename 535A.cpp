#include<iostream>
using namespace std;
int main()
{
int n;
char a[9][10]={"one","two","three","four","five","six","seven","eight","nine"};
char b[10][10]={"zero","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
char c[9][10]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
cin>>n;
if(n%10==0)
cout<<b[n/10];
else if(n/10==0)
cout<<a[n-1];
else if(n/10==1)
cout<<c[n%10-1];
else
cout<<b[n/10]<<"-"<<a[n%10-1];


}
