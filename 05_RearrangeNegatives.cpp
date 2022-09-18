#include<bits/stdc++.h>
using namespace std;

void rearrangeNegatives(int arr[], int n){
	int j = 0;
	for(int i=0; i<n; ++i){
		if(arr[i] < 0){
			if(i != j)
				swap(arr[i], arr[j]);
			++j;
		}
	}
}

int main(){
	int N;
	cin >> N;
	int arr[N];
	for(int i=0; i<N; ++i) cin >> arr[i];
	rearrangeNegatives(arr, N);
	for(int i=0; i<N; ++i) cout << arr[i] << " ";
	return 0;
}