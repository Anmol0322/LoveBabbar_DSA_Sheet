#include <bits/stdc++.h>
using namespace std;

int smallestSubWithSum(int arr[], int n, int x){
	int start, end, currSum, minLen = n;
    start = end = currSum = 0;
    while(end < n){
    	while(currSum <= x and end < n){
    		currSum += arr[end];
    		++end;
    	}
    	while(currSum > x and start < n){
    		if(end - start < minLen)
    			minLen = end - start;
    		currSum -= arr[start];
    		++start;
    	}
    }
    return minLen;
}

int main(){
	int A[] = {1, 10, 5, 2, 7};
	int n = sizeof(A)/sizeof(int);
	int x  =  9;
	cout << smallestSubWithSum(A, n, x);
	return 0;
}