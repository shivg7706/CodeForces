#include<bits/stdc++.h>
using namespace std;
int main()
{	
	unsigned long long a;
	int b,c,d,flag=0,i;
	cin>>a>>b>>c;
	a%=b;
	for(i=0;i<=b;i++)
	{	
		a*=10;
		d=(a/b);
		if(d==c){flag =1;break; }
		a%=b;
	//cout<<a<<" ";
	}
	if(flag)cout<<i+1;
	else cout<<"-1";
}