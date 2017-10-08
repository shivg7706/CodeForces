#include<stdio.h>
int main()
{
int i,a=0,n;
scanf("%d",&n);
char ch[n][3];
for(i=0;i<n;i++)
scanf("%s",ch[i]);
for(i=0;i<n;i++)
{
if(ch[i][1]=='+')
a++;
if(ch[i][1]=='-')
a--;
}
printf("%d",a);
return 0;
}
