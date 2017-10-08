#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,x,y,a[5][5];
for(i=0;i<5;i++)
	for(j=0;j<5;j++)
		scanf("%d",&a[i][j]);
for(i=0;i<5;i++)
	for(j=0;j<5;j++)
		if(a[i][j]==1)
		{
		x=i;
		y=j;
		break;		
		}	
x=abs(x-2);
y=abs(y-2);
printf("%d",x+y);
return 0;
}
