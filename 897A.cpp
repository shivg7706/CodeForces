#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		int l,r;
		char c1,c2;
		cin>>l>>r>>c1>>c2;
		for(int j=l-1;j<r;j++)
		{
			if(s[j]==c1)
				s[j]=c2;
		}
	}
	cout<<s;

}