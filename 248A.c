#include<stdio.h>
int main()
{
int i,h,j,x=0,y=0,m=0,n=0,c,b;
scanf("%d",&h);
j=h*2;
int a[j];
for(i=0;i<j;i++)
scanf("%d",&a[i]);
for(i=0;i<j-1;i+=2)
{
if(a[i]==0)
x++;
else
y++;
}
for(i=1;i<j;i+=2)
{
if(a[i]==0)
m++;
else
n++;
}
c=x<y?x:y;
b=m<n?m:n;
printf("%d",c+b);
return 0;
}
