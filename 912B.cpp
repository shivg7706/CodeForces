#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,t,c=0,a=0;
	cin>>n>>k;
	if(k==1)
		cout<<n<<endl;
	else
	{
		t=n;
		while(t>0)
		{
			t=t/2;
			c++;
		}
		for(int i=0;i<c;i++)
		{
			a=a+pow(2,i);
		}
		cout<<a<<endl;
	}
}