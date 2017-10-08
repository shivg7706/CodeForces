#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a[3],s;
cin>>a[0]>>a[1]>>a[2];
sort(a,a+3);
s=a[2]-a[0];
cout<<s;
return 0;
}
