#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n){
	int i = 0;
	while(i < n-1){
		swap(arr[i], arr[n-1]);
		++i;
	}
}

int main(){
	int N;
	cin >> N;
	int A[N];
	for(int i=0; i<N; ++i) cin >> A[i];
	rotate(A, N);
	for(int i=0; i<N; ++i) cout << A[i] << " ";
	return 0;	
}