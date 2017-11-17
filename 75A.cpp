#include<bits/stdc++.h>
using namespace std;
int main()
{
string s1,s2,s3;
cin>>s1>>s2;
int a,b,c;
a=stoi(s1);
b=stoi(s2);
c=a+b;
s3=to_string(c);
int m=s1.length();

for(int i=0;i<m;i++)
{
int n1=s1.find("0");
if(n1!=-1)
s1.erase(n1,1);
int n2=s2.find("0");
if(n2!=-1)
s2.erase(n2,1);
int n3=s3.find("0");
if(n3!=-1)
s3.erase(n3,1);
}
a=stoi(s1);
b=stoi(s2);
c=stoi(s3);
if(c==(a+b))
cout<<"YES";
else
cout<<"NO";
}
