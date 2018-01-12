#include<bits/stdc++.h>
using namespace std;
int main()
{
int a=1,k,p;
long long sum=0;
cin>>k>>p;
string s,j;
for(int i=0;i<k;i++)
{
s=to_string(a);
j=s;
reverse(s.begin(),s.end());
j=j+s;
//cout<<j;
sum+=stoll(j);
a++;
    
}
cout<<sum%p;
}