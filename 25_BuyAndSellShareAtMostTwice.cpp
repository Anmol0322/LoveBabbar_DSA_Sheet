#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>&price){;
    int n = price.size();
    int dp[n];
    for(int i=0; i<n; ++i) dp[i] = 0;
    int ma = price[n-1];
	int mi = price[0];
	for(int i=n-2; i>=0; --i){
		if(price[i]>ma) ma = price[i];
		dp[i] = max(dp[i+1], ma-price[i]);
	}
	for(int i=1; i<n; ++i){
		if(price[i]<mi) mi = price[i];
		dp[i] = max(dp[i-1], dp[i]+(price[i]-mi));
	}
	return dp[n-1];
}

int main(){
	int n = 7;
	vector<int> price{2, 30, 15, 10, 8, 25, 80};
	cout << maxProfit(price);
	return 0;
}