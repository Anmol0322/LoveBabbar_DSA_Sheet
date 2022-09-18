#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
   map<int, int> mp;
   int count = 0;
   for(int i=0; i<n; ++i){
   		mp[a1[i]]++;
   }
   for(int i=0; i<m; ++i){
   		if(mp.find(a2[i]) != mp.end() and mp[a2[i]] > 0){
   			mp[a2[i]] -= 1;
   			++count;
   		}
   }
   if(count == m) return "Yes";
   return "No";
}

int main(){
	int n = 6, a1[] = {11, 1, 13, 21, 3, 7};
	int m = 5, a2[] = {11, 3, 7, 1, 1};
	cout << isSubset(a1, a2, n, m);
	return 0;
}