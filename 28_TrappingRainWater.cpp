#include <bits/stdc++.h>
using namespace std;

long long trappingWater(int arr[], int n){
    int left_max = 0, right_max = 0;
    int low = 0, high = n-1;
    long long result = 0;
    while(low <= high){
    	if(arr[low] < arr[high]){
    		if(arr[low] > left_max)	left_max = arr[low];
    		else result += left_max - arr[low];
    		++low;
    	}
    	else{
    		if(arr[high] > right_max) right_max = arr[high];
    		else result += right_max - arr[high];
    		--high;	
    	}
    }
    return result;
}

int main(){
	int N = 4, arr[] = {7,4,0,9};
	cout << trappingWater(arr, N);
	return 0;
}