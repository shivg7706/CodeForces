#include<iostream>
using namespace std;
int main()
{
char a[101];
cin>>a;
int i,f=0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='H')
	{f=1;
	cout<<"YES";
	break;
	}
else if(a[i]=='Q')
	{f=1;
	cout<<"YES";
	break;
	}
else if(a[i]=='9')
	{f=1;
	cout<<"YES";
	break;
	}
}
if(f==0)
cout<<"NO";
return 0;
}
