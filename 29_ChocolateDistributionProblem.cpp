#include <bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m){
	sort(a.begin(), a.end());
	int i = 0, j = m - 1;
    int ans = INT_MAX;
    while(j < a.size()){
    	int diff = a[j] - a[i];
    	ans = min(ans, diff);
    	i++;
    	j++;
    }
    return ans;
}

int main(){
	long long N = 7, M = 3;
	vector<long long> A{7, 3, 2, 4, 9, 12, 56};
	cout << findMinDiff(A, N, M);
	return 0;
}