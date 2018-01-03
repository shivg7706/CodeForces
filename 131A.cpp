#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int c;
for(int i=0;i<s.length();i++)

	if(!isupper(s[0]))
	{
		s[0]=toupper(s[0]);
		for(int j=1;j<s.length();i++)
		{
		s[j]=tolower(s[j]);
		}
		cout<<s;
		break;
	}

	
