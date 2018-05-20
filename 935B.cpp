#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x=0,y=0,count=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;s[i];i++)
	{
		if(s[i]=='U')y+=1;
		if (s[i]=='R')x+=1;
		if (x==y)count++;
	}
	cout<<count;

}