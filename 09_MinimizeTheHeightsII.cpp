#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
    sort(arr, arr+n);
    int maxi = arr[n-1];
    int mini = arr[0];
    int ans = maxi - mini;
    
    for(int i=1; i<n; ++i){
        if(arr[i] - k < 0) continue;
        mini = min(arr[0]+k, arr[i]-k);
        maxi = max(arr[i-1]+k, arr[n-1]-k);
        ans = min(ans, maxi-mini);
    }
    return ans;
}

int main(){
	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i=0; i<n; ++i){
		cin >> arr[i];
	}
	cout << getMinDiff(arr, n, k);
	return 0;
}