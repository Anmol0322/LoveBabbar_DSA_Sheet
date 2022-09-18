#include <bits/stdc++.h>
using namespace std;

long long maxProduct(vector<int> arr, int n) {
	long long int minVal = arr[0];
	long long int maxVal = arr[0];
	long long int maxProd = arr[0];
	for(int i=1; i<n; ++i){
		if(arr[i] < 0)
			swap(minVal, maxVal);
		maxVal = max((long long int)arr[i], maxVal * arr[i]);
		minVal = min((long long int)arr[i], minVal * arr[i]);

		maxProd = max(maxProd, maxVal);
	}
	return maxProd;
}

int main(){
	int N = 5;
	vector<int> arr{6, -3, -10, 0, 2};
	cout << maxProduct(arr, N);
	return 0;
}