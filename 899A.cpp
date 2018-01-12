#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=0,j;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>j;
		if(j==1)a++;
		else if(j==2)b++;
	}
	if(a>b)
		cout<<b+((a-b)/3);
	else cout<<min(a,b);
}