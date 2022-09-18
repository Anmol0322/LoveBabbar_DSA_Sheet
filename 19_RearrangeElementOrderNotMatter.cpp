#include <bits/stdc++.h>
using namespace std;

void rearrageArray(int arr[], int n){
	int i = 0, j = n - 1;
	while(i < j){
		while(i <= n-1 and arr[i] > 0) ++i;
		while(j >= 0 and arr[j] < 0) --j;
		if(i < j)
			swap(arr[i], arr[j]);
	}
	if(i == 0 || i == n) return;

	int k = 0;
	while(k < n and i < n){
		swap(arr[k], arr[i]);
		++i;
		k += 2;
	}
}

int main(){
	int n = 6, arr[] = {2, 3, -4, -1, 6, -9};
	rearrageArray(arr, n);
	for(int i: arr){
		cout << i << " ";
	}
	return 0;
}