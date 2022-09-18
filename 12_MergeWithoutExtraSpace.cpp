#include <bits/stdc++.h>
using namespace std;
#define ll long long

void merge(long long arr1[], long long arr2[], int n, int m) { 
	int i = 0, j = 0, k = n - 1;
    while (i <= k && j < m) {
        if (arr1[i] < arr2[j])
            i++;
        else {
            swap(arr2[j++], arr1[k--]);
        }
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main(){
	int n = 4, m = 5;
	ll arr1[] = {1, 3, 5, 7};
	ll arr2[] = {0, 2, 6, 8, 9};
	merge(arr1, arr2, n, m);	
	for(int i=0; i<n; ++i){
		cout << arr1[i] << " ";
	}
	cout << endl;
	for(int i=0; i<m; ++i){
		cout << arr2[i] << " ";
	}
	return 0;
}