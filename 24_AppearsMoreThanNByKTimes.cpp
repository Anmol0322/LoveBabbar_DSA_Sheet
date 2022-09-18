#include <bits/stdc++.h>
using namespace std;

void morethanNbyK(int arr[], int n, int k){
	int x = n / k;
	map<int, int> mp;
	for(int i=0; i<n; ++i){
		mp[arr[i]]++;
	}
	for(auto i: mp){
		if(i.second > x){
			cout << i.first << endl;
		}
	}
}

int main(){
	int arr[] = {1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1};
	int n = sizeof(arr)/sizeof(int);
	int k = 4;
	morethanNbyK(arr, n, k);
	return 0;
}