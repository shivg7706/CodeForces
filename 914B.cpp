#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==1){cout<<"Conan\n"<<endl;return 0;}
	int c=0;
	int *a=new int [n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(int i=n-1;i>=0;i--)
		if(a[i]==a[i-1])
			c++;
		else break;
	if(c%2==0)cout<<"Conan\n";
	else  cout<<"Agasa\n";
}