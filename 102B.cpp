#include<iostream>
#include<string>
using namespace std;
int main()
{
int i;
long int c=0,k=0;
string s;
cin>>s;
while(s.length()!=1)
{
    c=0;
	for(i=0;i<s.length();i++)
	c+=(s[i]-48);
	k++;
s=to_string(c);
}
cout<<k;
}

