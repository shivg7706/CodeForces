#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,b,flag=0;
		cin>>x;;
		for(int i=0;i<35;i++)
		{
			if(i*3<=x && (x-3*i)%7==0)
			{
				cout<<"YES\n";flag=1;break;
			}	
		}
	if(!flag){cout<<"NO\n";}
	}
}