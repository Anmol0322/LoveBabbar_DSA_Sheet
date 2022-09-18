#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n){
  	unordered_set<int> S;
    int ans = 0;
    for (int i = 0; i < n; i++)
        S.insert(arr[i]);
    for (int i = 0; i < n; i++) {
        if (S.find(arr[i] - 1) == S.end()) {
            int j = arr[i];
            while (S.find(j) != S.end())
                j++;
            ans = max(ans, j - arr[i]);
        }
    }
    return ans;
}

int main(){
	int N = 7;
	int arr[] = {1,9,3,10,4,20,2};
	cout << findLongestConseqSubseq(arr, N);
	return 0;
}