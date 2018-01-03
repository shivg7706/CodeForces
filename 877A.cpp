#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int a[5],k=0;
a[0]=s.find("Danil");
a[1]=s.find("Olya");
a[2]=s.find("Slava");
a[3]=s.find("Ann");
a[4]=s.find("Nikita");
for(int i=0;i<5;i++)
{
	if(a[i]!=-1)
	k++;
}
if(k==1) cout<<"YES";
else cout<<"NO";
}
