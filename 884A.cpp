#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,t;
cin>>n>>t;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int k=0;
for(int i=0;i<n;i++)
{
k+=86400-a[i];
	if(k>=t)
	{cout<<i+1;break;}

}
}
