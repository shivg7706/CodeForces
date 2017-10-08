#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j,count=0;
scanf("%d",&n);
char ch[n];
scanf("%s",ch);
j=strlen(ch);
for(i=0;i<j-1;i++)
{
	if(ch[i]==ch[i+1])
	count++;
}
printf("%d",count);
return 0;
}
