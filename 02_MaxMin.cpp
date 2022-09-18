#include<bits/stdc++.h>
using namespace std;

int findSum(int A[], int N)
{
	if(N == 0) return 0;
	if(N == 1) return A[0];
	sort(A, A+N);
	int mini, maxi, sum;
	mini = A[0];
	maxi = A[N-1];
	sum = maxi + mini;
	return sum;
}

int main(){
	int N;
	cin >> N;
	int A[N];
	for(int i=0; i<N; ++i) cin >> A[i];
	cout << findSum(A, N);
	return 0;
}