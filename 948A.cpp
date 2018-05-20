#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c;
	bool k=false;
	cin>>r>>c;
	string s[r];
	for(int i=0;i<r;i++)
		cin>>s[i];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(s[i][j]=='S')
			{

                if(j<c-1 && s[i][j+1]=='W')k=true;
                if(j>0 && s[i][j-1]=='W')k=true;
                if(i>0 && s[i-1][j]=='W')k=true;
                if(i<r-1 && s[i+1][j]=='W')k=true;
			}	

			if(k){cout<<"No\n";return 0;}
			else
			{
				if(j<c-1 && s[i][j+1]=='.')s[i][j+1]='D';
                if(j>0 && s[i][j-1]=='.')s[i][j-1]='D';
                if(i>0 && s[i-1][j]=='.')s[i-1][j]='D';
                if(i<r-1 && s[i+1][j]=='.')s[i+1][j]='D';
			}
		}
	}
	cout<<"Yes\n";
	for(int i=0;i<r;i++)
		cout<<s[i]<<endl;
}