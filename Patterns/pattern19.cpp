#include<bits/stdc++.h>
using namespace std;

void pattern19(int n){
	int iniS = 0;
	for(int i=0; i<n; i++){
		// stars
		for(int j=1;j<=n-i;j++){
			cout<<"*";
		}
		// space
		for(int j = 0; j < iniS; j++){
			cout<<" ";
		}
		// stars
		for(int j=1;j<=n-i;j++){
			cout<<"*";
		}
		iniS += 2;
		cout<<endl;
	}
	iniS = 2*n - 2;
	for(int i=1; i<=n; i++){
		// stars
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		// space
		for(int j = 0; j < iniS; j++){
			cout<<" ";
		}
		// stars
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		iniS -= 2;
		cout<<endl;
	}	
	
}

int main(){
	int n;
	cin>>n;
	pattern19(n);
}