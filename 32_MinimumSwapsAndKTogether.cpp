#include <bits/stdc++.h>
using namespace std;

int minSwap(int arr[], int n, int k){
	int fav = 0, nonfav = 0;
	for(int i=0; i<n; ++i){
		if(arr[i] <= k) ++fav;
	}
	for(int i=0; i<fav; ++i){
		if(arr[i]>k) ++nonfav;
	}

	int l=0, r=fav-1, res=INT_MAX;

	while(r<n){
		res = min(res, nonfav);
		r++;
		if(r<n && arr[r]>k) nonfav++;
		if(l<n && arr[l]>k) nonfav--;
		l++;
	}
	return res == INT_MAX?0:res;
}

int main(){
	int arr[] = {2, 1, 5, 6, 3};
	int n = sizeof(arr)/sizeof(int);
	int k = 3;
	cout << minSwap(arr, n, k);
	return 0;
}