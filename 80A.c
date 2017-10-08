#include<stdio.h>
main()
{
int i,j,f=0,a,b,g,d=0;
scanf("%d %d",&a,&b);
for(j=a+1;j<=b;j++)
{f=0;
	for(i=2;i<=j/2;i++)
	{
	if(j%i==0)
	f=1;
	}
		if(f==0)
		{
		g=j;
		break;
		}
}
if(g==b)
printf("YES");
else
printf("NO");
}
