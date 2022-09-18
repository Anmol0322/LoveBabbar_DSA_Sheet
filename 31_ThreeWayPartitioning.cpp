#include <bits/stdc++.h>
using namespace std;

void threeWayPartition(vector<int>& array,int a, int b){
    int start = 0, end = array.size()-1, i = 0;
    while(i <= end){
    	if(array[i] < a){
    		swap(array[i], array[start]);
    		++i;
    		++start;
    	}
    	else if(array[i] > b){
    		swap(array[i], array[end]);
    		--end;
    	}
    	else
    		++i;
    }
}

int main(){
	int n = 5;
	vector<int> A{1, 2, 3, 3, 4};
	int a = 1, b = 2;
	threeWayPartition(A, a, b);
	for(auto i:A){
		cout << i << " ";
	}
	return 0;
}