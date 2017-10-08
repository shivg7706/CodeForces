#include<stdio.h>
void main()
{
int n;
if(n>0)
{
scanf("%d\n",&n);
int i,j,k=0,s[3],a[n][3];
for(i=0;i<n;i++)
{
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
}

for(i=0;i<3;i++)
{
s[i]=0;

	for(j=0;j<n;j++)
	s[i]+=a[j][i];
}
for(i=0;i<3;i++)
{if(s[i]==0)
k++;
else
k=0;
}
if(k==3)
printf("YES\n");
else
printf("NO\n");
}
else
printf("Wrong entry");
}
