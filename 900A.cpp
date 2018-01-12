#include<iostream>
using namespace std;
int main()
{
	int n,x=0,y=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		if(a>0)x++;
		else y++;
	}
	if(x<=1||y<=1)
		cout<<"Yes";
	else cout<<"No";

}