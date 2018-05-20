#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(int i = 0; i < s.length()-3; i++){
		if(s[i] == 'W' and s[i+1] == 'U' and s[i+2] == 'B'){
			cout<<" ";
			i += 2;
		}else{
			cout<<s[i];
		}

	
	}
}