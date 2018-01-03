#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,a,b,c,s=0;
char ch='r';
cin>>n>>a>>b>>c;
while(--n)
{
	if(ch=='r')
	{
	if(a<b){s+=a;ch='o';}
	else{s+=b;ch='e';}
	}
	else
	{ if(ch=='e')
	{
	if(b<c){s+=b;ch='r';}
	else{s+=c;ch='o';}
	}
	else{ if(ch=='o')
	{
	if(c<a){s+=c;ch='e';}
	else{s+=a;ch='r';}
	}}}
}
cout<<s;
return 0;
}	

	
