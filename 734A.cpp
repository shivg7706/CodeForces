#include<iostream>
#include<string>
using namespace std;
int main()
{
long int n;
cin>>n;
int i,b=0;
string s;
cin>>s;
for(i=0;i<s.length();i++)
if(s[i]=='A')
b++;
if(b>n-b)
cout<<"Anton";
else if(b==n-b)
cout<<"Friendship";
else
cout<<"Danik";
}

