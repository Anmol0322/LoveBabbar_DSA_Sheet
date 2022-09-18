#include <bits/stdc++.h>
using namespace std;

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
    map<int, int> mp1;
    map<int, int> mp2;
    vector<int> ans;
    for(int i=0; i<n1; ++i){
    	mp1[A[i]] = 1;
    }
    for(int i=0; i<n2; ++i){
    	if(mp1.find(B[i]) != mp1.end())
    		mp2[B[i]] = 1;
    }
    for(int i=0; i<n3; ++i){
    	if(mp2.find(C[i]) != mp2.end() and mp2[C[i]] > 0){
    		ans.push_back(C[i]);
    		mp2[C[i]] = 0;
    	}
    }
    return ans;
}

int main(){
	int n1 = 3, A[] = {3,3,3};
	int n2 = 3, B[] = {3,3,3};
	int n3 = 3, C[] = {3,3,3};
	vector<int> res;
	res = commonElements(A, B, C, n1, n2, n3);
	for(auto i: res){
		cout << i << " ";
	}
	return 0;
}