#include <bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
    map<int, int> mp;
    int count = 0;
    for(int i=0; i<n; ++i){
        int val = k - arr[i];
        if(mp.find(val) != mp.end()){
            count += mp[val]; 
            mp[arr[i]]++;
        }
        else{
            mp[arr[i]]++;
        }
    }
    return count;
}

int main(){
    int n = 4, k = 6;
    int arr[] = {1, 5, 7, 1};
    cout << getPairsCount(arr, n, k);
    return 0;
}