#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;int c=0;
	cin>>s;
	int h=s.find('1');
	if(h!=-1)
	for(int i=h+1;s[i];i++)
	{
		if(s[i]=='0')
			c++;

	}
	if(c>=6)cout<<"yes\n";
	else cout<<"no\n";

}
