#include<bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    int i = 0, mid = 0, j = n-1;
    while(mid <= j){
    	switch(a[mid]){
    		case 0: swap(a[i++], a[mid++]);
    				break;
		case 1: mid++;
    				break;
    		case 2: swap(a[mid], a[j--]);
    				break;
    	}
    }
}

int main(){
	int N;
	cin >> N;
	int arr[N];
	for(int i=0; i<N; ++i) cin >> arr[i];
	sort012(arr, N);
	for(int i=0; i<N; ++i) cout << arr[i] << " ";
	return 0;
}