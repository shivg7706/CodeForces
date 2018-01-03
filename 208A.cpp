#include<bits/stdc++.h>
using namespace std;
int main()
{
int p;
string s;
cin>>s;
for(int i=0;i<s.length();i++)
{
	p=s.find("WUB");
	s.replace(p,3," ");
}
cout<<s;
return 0;
}
