#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int i,j,l,f=0;
char a[101],b[101];
cin>>a>>b;
l=strlen(b);
for(i=0,j=l-1;a[i]!='\0';i++,j--)
{
	if(a[i]!=b[j])
	{f=1;
	cout<<"NO";
	break;
	}
}
if(f==0)
cout<<"YES";
return 0;
}
