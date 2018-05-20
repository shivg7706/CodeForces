#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,k,temp;
	cin>>n>>k;
	ll *a=new ll [k];
	ll *b=new ll [k];
	for(ll i=0;i<k;i++)
	{
		cin>>temp;
		a[i]=n%temp;
		b[i]=n/temp;
	}
	ll min=a[0],l=0;
	for(ll i=1;i<k;i++)
	{
		if(a[i]<min)
			{min=a[i];l=i;}
	}

	cout<<l+1<<" "<<b[l]<<endl;
}