#include<stdio.h>
int main()
{
int i;
char a[101],b[101];
scanf("%s%s",a,b);

for(i=0;a[i]!='\0';i++)
{
	if(a[i]==b[i])
	printf("0");
	else
	printf("1");
}
return 0;
}
