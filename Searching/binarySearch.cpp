#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int x){
	int low = 0, high = n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]==x){
			return mid;
		}
		else if(arr[mid]>x){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return -1;
}

int main(){
	int arr[5] = {22,33,55,66,2322};
	cout<<binarySearch(arr,5,33);
}