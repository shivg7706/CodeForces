#include<stdio.h>
#include<string.h>
int main()
{
int i,h,j;
char a[100],b;
scanf(" %s",a);
h=strlen(a);
for(j=0;j<h-1;j+=2)
{
	for(i=0;i<=(h-3)-j;i+=2)
	{
	if(a[i]>a[i+2])
		{
		b=a[i];
		a[i]=a[i+2];
		a[i+2]=b;
		}
	}
}
printf("%s",a);
return 0;
}

