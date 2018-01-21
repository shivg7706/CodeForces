#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,e=0,k,l=0;
	cin>>n;
	long long s=0; 
	for(int i=0;i<n;i++)
	{
		cin>>k;
		e+= l-k;
        if(e<0)
        {
            s-=e;e=0;
        }
        l=k;
	}
	cout<<s<<endl;
}