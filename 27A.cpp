#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int n,i,c=0;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
if(a[0]==1)
{

for(i=0;i<n-1;i++)
{
if((a[i+1]-a[i])>1)
	{
	c=a[i]+1;
	break;
	}

}
if(c==0)
c=a[n-1]+1;
}
else
c=1;
cout<<c;
return 0;
}
