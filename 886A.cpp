#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[6],s=0,b=0,flag=0;
for(int i=0;i<6;i++)
{
cin>>a[i];s+=a[i];
}
for(int i=1;i<5;i++)
	{for(int j=i+1;j<6;j++)
		{
		b=a[0]+a[i]+a[j];
		if(s==b*2)
		{
		cout<<"YES";flag=1;break;}
		}
		if(flag==1)break;
	}
if(flag==0)
cout<<"NO";

}		
