#include<bits/stdc++.h>
using namespace std;

int lower_bound(int arr[], int n, int x){
	int low = 0, high = n-1;
	int ans = n;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]>=x){
			ans = mid;
			high = mid-1;
		}
		else{
			low = mid + 1;
		}
	}
	return ans;
}

int main(){
	int arr[10] = {1,2,3,3,7,8,9,9,9,11};
	int x = 10;
	cout<<lower_bound(arr,10,x);
}
