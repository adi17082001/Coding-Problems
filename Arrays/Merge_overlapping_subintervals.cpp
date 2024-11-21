#include<bits/stdc++.h>
using namespace std;

// brute force

vector<vector<int>>mergeOverlappingSubintervals(vector<vector<int>> &arr){
	int n = arr.size();
	sort(arr.begin(), arr.end());
	vector<vector<int>>ans;
	for(int i = 0; i < n; i++){
		int start = arr[i][0];
		int end = arr[i][1];
		if(!ans.empty() && end <= ans.back()[1]){
			continue;
		}
		for(int j = i + 1; j < n; j++){
			if(arr[j][0] <= end){
				end = max(end, arr[j][1]);
			}
			else{
				break;
			}
		}
		ans.push_back({start,end});
	}
	return ans;
}

//optimal

vector<vector<int>>mergeOverlappingSubintervals(vector<vector<int>>&arr){
	int n = arr.size();
	sort(arr.begin(), arr.end());
	vector<vector<int>>ans;
	for(int i = 0; i < n; i++){
		if(ans.empty() || arr[i][0] > ans.back()[1]){
			ans.push_back(arr[i]);
		}else{
			ans.back()[1] = max(ans.back()[1], arr[i][1]);
		}
	}
	return ans;
}

int main(){
	vector<vector<int>>arr = {{1,3},{2,4},{2,6},{8,9},{9,11},{8,10},{15,18},{16,17}};
	vector<vector<int>> res = mergeOverlappingSubintervals(arr);
	for(auto array: res){
		for(auto i : array){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
