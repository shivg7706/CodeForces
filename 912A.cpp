#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,x,y,z;
	cin>>a>>b>>x>>y>>z;
	long long int ye,bl;
	ye=x*2+y*1;
	bl=y*1+z*3;

//cout<<ye<<" "<<bl<<" ";

	if(ye>=a){ye=ye-a;}else ye=0;
	if(bl>=b){bl=bl-b;} else bl=0;
	cout<<ye+bl<<endl;
}