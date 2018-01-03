#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=0,b=0,c=0,d=0,k,q;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='U')
			a++;

		if(s[i]=='L')
			b++;

		if(s[i]=='R')
			c++;
		if(s[i]=='D')
			d++;
	

	
	}
	if(a>d)
		a=d;
	if(b>c)
		b=c;
	cout<<2*(a+b);
return 0;
}
