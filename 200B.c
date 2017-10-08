#include<stdio.h>
int main()
{
int n,s=0,i;
float k;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
s+=a[i];

k=(float)s/n;
printf("%f",k);
return 0;
}

