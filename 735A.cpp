#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,m,flag=0;
cin>>n>>k;

string s;
cin>>s;
int g=s.find("G");
int t=s.find("T");
if(g>t)
{
	reverse(s.begin(),s.end());
	g=s.find("G");
	t=s.find("T");
}
while(g<s.length())
{
	if(s[g]=='#')
	{ cout<<"NO";flag=2;break;}
	if(g==t)
	{cout<<"YES";flag=1;break;}
	
	g=g+k;
}

if(flag==0)
cout<<"NO";
return 0;
}
