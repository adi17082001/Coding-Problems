#include<bits/stdc++.h>
using namespace std;


int LCS(string x, string y, int n, int m){
	//base condition
	if(n==0 || m==0) return 0;

	// choice diagram
	if(x[n-1] == y[m-1])
		return 1 + LCS(x,y,n-1,m-1);
	else{
		return max(LCS(x,y,n,m-1),LCS(x,y,n-1,m));
	}
}


int main(){
	string x = "abcfgh";
	string y = "abegh";
	int n= x.length();
	int m = y.length();
	cout<<LCS(x,y,n,m)<<endl;
}