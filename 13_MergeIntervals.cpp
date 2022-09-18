#include <bits/stdc++.h>
using namespace std;

static bool cmp(vector<int> a, vector<int> b){
	return a[0] < b[0];
}

vector<vector<int>> merge(vector<vector<int>>& intervals) {
	sort(intervals.begin(), intervals.end(), cmp);
	vector<vector<int>> outer;
	vector<int> inner;
	int i = 0, n = intervals.size();
	while(i < n){
		int start = intervals[i][0];
		int end = intervals[i][1];
		int j = i + 1;
		while(j < n){
			int element = intervals[j][0];
			if(element >= start and element <= end){
				end = max(intervals[j][1], end);
				++j;
				continue;
			}
			break;
		}
		i += (j-i);
		inner.push_back(start);

		inner.push_back(end);
		outer.push_back(inner);
		inner.clear();
	}

	return outer;
}

int main(){
	vector<vector<int>> intervals{
		{1,4},{4,5}
	};
	vector<vector<int>> ans;
	ans = merge(intervals);
	for(auto i: ans){
		for(int a: i){
			cout << a << " ";
		}
		cout << endl;
	}
	return 0;
}
