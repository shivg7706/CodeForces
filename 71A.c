#include<stdio.h>
#include<string.h>
int main()
{
int i,n,b[100],x,y;
scanf("%d",&n);
char a[n][102];
for(i=0;i<n;i++)
scanf(" %s",a[i]);
for(i=0;i<n;i++)
b[i]=strlen(a[i]);
for(i=0;i<n;i++)
{
if(b[i]>10)
{
y=(b[i]-2)/10;
		if(y==0)
		{
		a[i][2]=a[i][b[i]-1];
		b[i]=b[i]-2;
		x=b[i]%10;
		a[i][1]=x+48;
		a[i][3]='\0';
		}
		else
		{
		a[i][3]=a[i][b[i]-1];
		b[i]=b[i]-2;
		x=b[i]%10;
		a[i][1]=y+48;
		a[i][2]=x+48;
		a[i][4]='\0';
		}
}
}
for(i=0;i<n;i++)
printf("%s\n",a[i]);
return 0;
}
