#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
    sort(arr, arr+(r+1));
    int val;
    val = arr[k-1];
    return val;
}

int main(){
	int N, K;
	cin >> N >> K;
	int arr[N];
	for(int i=0; i<N; ++i) cin >> arr[i];
	cout << kthSmallest(arr, 0, N-1, K);
	return 0;
}