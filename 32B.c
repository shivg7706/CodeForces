#include<stdio.h>
int main()
{
int i=0;
char a[202];
scanf("%s",a);
while(a[i]!='\0')
{
if(a[i]=='.')
{
printf("0");
i++;
}
else if(a[i]=='-'&&a[i+1]=='.')
	{
	printf("1");
	i+=2;
	}
else if(a[i]=='-'&&a[i+1]=='-')
	{
	printf("2");
	i+=2;
	}
}
return 0;
}
