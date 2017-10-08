#include<stdio.h>
#include<string.h>
void main()
{
int i,j,n,t,a;
scanf("%d %d",&n,&t);
char s[n],temp;
scanf("%s",s);
a=strlen(s);
for(j=0;j<t;j++)
	for(i=0;i<a-1;i++)
	{
	if(s[i]=='B' && s[i+1]=='G')
	{	
	temp=s[i];
	s[i]=s[i+1];
	s[i+1]=temp;
	i++;
	}
	}
printf("%s\n",s);
}


