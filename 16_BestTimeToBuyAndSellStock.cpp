#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int min_price = INT_MAX;
    int profit = INT_MIN;

    for(int i=0; i<prices.size(); ++i){
        min_price = min(min_price, prices[i]);
        profit = max(profit, prices[i]-min_price);
    }
    return profit;
}

int main(){
    vector<int> prices{7,6,4,3,1};
    cout << maxProfit(prices);
    return 0;
}