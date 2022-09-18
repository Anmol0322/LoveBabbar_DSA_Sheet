#include <bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n){
   	map<int, int> mp;
   	int prefixSum = 0;
   	for(int i=0; i<n; ++i){
   		if(arr[i] == 0) return true;
   		prefixSum += arr[i];
   		if(mp.find(prefixSum) != mp.end() || prefixSum == 0){
   			return true;
   		}
   		mp[prefixSum] = i;
   	}
   	return false;
}

int main(){
	int n = 2;
	int arr[] = {4, -4};
	cout << subArrayExists(arr, n);
	return 0;
}