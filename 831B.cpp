#include<iostream>
using namespace std;
int main()
{
int i,j;
char a[28],b[28],c[1002];
cin>>a>>b>>c;
for(i=0;c[i]!='\0';i++)
{
	for(j=0;a[j]!='\0';j++)
	{
		if(c[i]==a[j]||(c[i]+32)==a[j])
		{
			if(c[i]>='A'&&c[i]<='Z')
			c[i]=b[j]-32;
			else
			c[i]=b[j];
			break;
		}
	}
}
cout<<c;
return 0;
}
