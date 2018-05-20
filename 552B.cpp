#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll power(ll a,ll b)
{
	ll p=1;
	for(ll i=0;i<b;i++)
		p*=a;;
	return p;
}
int main()
{
	ll a[10],n,temp,count=0;
	a[0]=9;
	cin>>n;
	if(n%10==n){cout<<n<<endl;return 0;}
	temp=n;
	for(ll i=1;i<9;i++)
		a[i]=9*power(10,i)*(i+1)+a[i-1];
	
	while(temp>0)
	{
		temp/=10;
		count++;
	}
	cout<<(n-(power(10,count-1)-1))*count+a[count-2]<<endl;
}