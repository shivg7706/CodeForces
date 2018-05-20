#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin>>n>>k;
	string *s = new string[n];
	for(int i=0;i<n;i++)
		cin>>s[i];

	int temp[n][n];

	for(int i =0;i<n;i++){
		for(int j =0;j<n;j++) {
			temp[i][j] = 0;
		}
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<n-k+1;j++){
			int c = 0;
			for(int m = j;m<j+k;m++){
				if(s[i][m] == '.')
				c++;	
			}
			if (c == k){
				for(int m = j; m<j+k;m++)
					temp[i][m]++;
			}
		}
	}

	for(int i=0;i<n;i++) {
		for(int j=0;j<n-k+1;j++) {
			int c = 0;
			for(int m = j;m<j+k;m++) {
				if(s[m][i] == '.')
				c++;	
			}
			if (c == k) {
				for(int m = j; m<j+k;m++)
					temp[m][i]++;
			}
		}
	}

	int a = 1,b = 1,max=0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(max<temp[i][j]){
				max = temp[i][j];
				a = i+1;
				b = j+1;
			}
		}
	}
	cout<<a<<" "<<b<<endl;

return 0;
}