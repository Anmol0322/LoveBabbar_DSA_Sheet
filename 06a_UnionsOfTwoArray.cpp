#include<bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
    int count = 0;
    map<int, int> mp;
    for(int i=0; i<n; ++i){
    	if(mp.find(a[i]) == mp.end()){
    		mp[a[i]] = 1;
    		count++;
    	}
    }
    for(int i=0; i<m; ++i){
    	if(mp.find(b[i]) == mp.end()){
    		mp[b[i]] = 1;
    		count++;
    	}	
    }
    return count;
}

int main(){
	int n, m;
	cin >> n >> m;
	int arr[n], brr[m];
	for(int i=0; i<n; ++i) cin >> arr[i];
	for(int i=0; i<m; ++i) cin >> brr[i];
	cout << doUnion(arr, n, brr, m);
	return 0;	
}