#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
    map<int, int> mp;
    for(int i=0; i<nums.size(); ++i){
    	mp[nums[i]]++;
    }
    for(auto i: mp){
    	if(i.second > 1){
    		return i.first;
    	}
    }
    return -1;
}

int main(){
	vector<int> nums{3,1,3,4,2};
	cout << findDuplicate(nums);
	return 0;
}