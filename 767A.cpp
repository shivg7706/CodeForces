#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
stack <int> s;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

if(n==1)
	cout<<a[0];
else
{s.push(a[0]);

for(int i=1;i<n;i++)
{

	if(!s.empty())
	{	if (a[i]<s.top())
		while(!s.empty())
		{	cout<<a[i]<<" ";
			cout<<s.top()<<" ";
		s.pop();}
		cout<<"\n";
	}
	else
	{s.push(a[i]);cout<<endl;}	
}}
return 0;
}
