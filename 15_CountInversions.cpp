//inversion : a[i]>a[j] and i<j
#include <bits/stdc++.h>
using namespace std;

long long int mergeSort(long long arr[], long long left, long long right){
	long long int inv = 0;
	if(left < right){
		long long mid = left + right / 2;
		inv += mergeSort(arr, left, mid);
		inv += mergeSort(arr, mid+1, right);
		inv += merge(arr, left, mid, right);
	}	
	return inv;
}

long long int merge(long long arr[], long long left, long long mid, long long right){
	long long i = left, j = mid + 1, k = left;
	long long int inv = 0;
	long long brr[right];
	while(i <= mid and j <= right){
		if(arr[i] <= arr[j]){
			brr[k] = arr[i];
			++k;
			++i;
		}
		else{
			brr[k] = arr[j];
			inv += (mid - i) + 1; 
			//[4,5] [2,3]  -> (1-0) + 1 = 2 all elements >= ith element of arr is greater than all elements of brr
			++k;
			++j;
		}
	}
	while(i <= mid){
		brr[k] = arr[i];
		++k;
		++i;
	}
	while(j <= right){
		brr[k] = arr[j];
		++k;
		++j;	
	}
	for(int k=left; k<=right; ++k){
		arr[k] = brr[k];
	}
	return inv;
}

long long int inversionCount(long long arr[], long long n){
	return mergeSort(arr, 0, n-1);
}

int main(){
	long long n = 5;
	long long int arr[] = {2, 4, 1, 3, 5};
	cout << inversionCount(arr, n);
	return 0;
}