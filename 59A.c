#include<stdio.h>
int main()
{
int i,s=0,b=0;
char a[100];
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
	if(a[i]>='a'&&a[i]<='z')
	s++;
	else
	b++;
}
if(b>s)
for(i=0;a[i]!='\0';i++)
{
	if(a[i]>='a'&&a[i]<='z')
	a[i]=a[i]-32;
}
else
for(i=0;a[i]!='\0';i++)
{
	if(a[i]>='A'&&a[i]<='Z')
	a[i]=a[i]+32;
}
printf("%s",a);
return 0;
}
 

