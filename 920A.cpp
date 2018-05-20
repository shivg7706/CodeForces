#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<int >v;
		int n,k;
		cin>>n>>k;
		int *a=new int [k];
		for(int i=0;i<k;i++)
			cin>>a[i];
		for(int i=0;i<k;i++)
		{
			if(i==0)max=a[i];
			else
				if(max>(a[i]-a[i])/2)max=(a[i]-a[i])/2;

		}
		cout<<max;


	}
return 0;
}