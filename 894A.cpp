#include<bits/stdc++.h>
using namespace std;
int main()
{
int c=0;
string t,s;
cin>>t;
if(t.length()==1)
{cout<<c;return 0;}


for(int i=0;i<t.length();i++)
{if(t[i]=='Q'||t[i]=='A')
s.push_back(t[i]);}

for(int i=2;i<s.length();i++)
{
	for(int j=i+1;j<s.length()+1;j++)
		{
			for(int k=j+1;k<=s.length()+2;k++)
				{
				if(s[i-2]=='Q'&&s[j-2]=='A'&&s[k-2]=='Q')
				c++;
				}
		}
}
cout<<c;
}

