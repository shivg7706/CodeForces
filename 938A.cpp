#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string a;
	cin>>a;
	for(int i=0;i<a.length()-1;i++)
	{
		if((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')&&(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u'||a[i+1]=='y'))
		{
			a.erase(i+1,1);
			i--;
		}

	}
	cout<<a<<endl;
	
}