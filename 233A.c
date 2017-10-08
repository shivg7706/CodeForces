#include<stdio.h>
int main()
{
int n,i,j,k;
scanf("%d",&n);
if(n%2==0)
{
int a[n];
for(i=0;i<n;i++)
a[i]=i+1;
for(i=0;i<n;i+=2)
{
	k=a[i];
	a[i]=a[i+1];
	a[i+1]=k;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
else
printf("-1");
}

