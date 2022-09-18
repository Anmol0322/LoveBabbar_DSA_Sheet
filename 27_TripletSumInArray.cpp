#include <bits/stdc++.h>
using namespace std;

bool find3Numbers(int A[], int n, int X){
	int threeSum;
	sort(A, A+n);
	int j, k;
    for(int i=0; i<n; ++i){
    	j = i+1;
    	k = n-1;
    	while(j < k){
    		threeSum = A[i] + A[j] + A[k];
    		if(threeSum == X) return true;
    		else if(threeSum > X) --k;
    		else ++j;
    		while(j < k and A[j] == A[j-1]) ++j;
    		while(k > j and A[k] == A[k+1]) --k;
    	}
    	while(i < n and A[i] == A[i-1]) ++i;
    }
    return false;
}

int main(){
	int n = 5, X = 10;
	int arr[] = {1, 2, 4, 3, 6};
	cout << find3Numbers(arr, n, X);
	return 0;
}