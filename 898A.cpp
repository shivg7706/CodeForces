#include<iostream>
using namespace std;
int main()
{
	int a,k;
	cin>>a;
	k=a%10;
	if(k<=5){a=a-k;}
	else{a=a-k+10;}
		cout<<a;
}