#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int> v;
	vector<int > v1;
	cin>>n;
	int *a=new int [n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int min=a[0];
	for(int i=1;i<n;i++)
		if(a[i]<min)min=a[i];
	for(int i=0;i<n;i++)
		if(a[i]==min)v.push_back(i);
	for(int i=1;i<v.size();i++)
		v1.push_back(v[i]-v[i-1]);
	sort(v1.begin(),v1.end());
	cout<<v1[0]<<endl;


}
