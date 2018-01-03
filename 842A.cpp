#include<stdio.h>
int main()
{
int a,b,l,r,x,y,flag=0;
float k,q;
scanf("%d %d %d %d %f",&l,&r,&x,&y,&k);
for(a=l;a<=r;a++)
{
	for(b=x;b<=y;b++)
	{
		q=a/b;
		if(q==k)
		{printf("YES");flag=1;break;}
	}if(flag==1)break;
}
if(flag==0)
printf("NO\n");
return 0;
}
