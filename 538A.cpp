#include<iostream>
#include<string>
using namespace std;

int main()
{
int i,j;
string s;
cin>>s;
for(i=0;i<s.length();i++)
        for(j=i+1;j<=s.length();j++)
            if (s.substr(0,i)+s.substr(j)=="CODEFORCES")
            {
                cout<<"YES\n";;
                return 0;
            }
cout<<"NO\n";
return 0;
}
