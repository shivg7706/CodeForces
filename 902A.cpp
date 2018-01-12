#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,s=0;
	cin>>n>>m;
    for (int i=1;i<=n;i++)
    {
        int x, y;
        cin>>x>>y;
        if (x>s) {cout<<"NO";return 0;}
        s=max(s, y);
    }
if (s>=m) cout<<"YES";
else cout<<"NO";
}