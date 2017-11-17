#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int a[m],b[m];
for(int i=0;i<m;i++)
cin>>b[i]>>a[i];
vector< pair <int,int> > c;
for(int i=0;i<m;i++)
c.push_back(make_pair(a[i],b[i]));
sort(c.rbegin(),c.rend());
int max=0;

for(int i=0;i<c.size();i++)
{
	if(n>c[i].second)
	{max+=c[i].second*c[i].first;
	n-=c[i].second;
	}
	else
	{
	max+=n*c[i].first;
	break;
	}
	
}
cout<<max;
}
