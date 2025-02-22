#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		for (int i = 0; i < n; i++) {
			nums1[m + i] = nums2[i];
		}
		sort(nums1.begin(), nums1.end());
	}
};

int main() {
	vector<int> nums1 = { 1,2,3,0,0,0 };
	vector<int> nums2 = { 2,5,6 };
	Solution sol;
	sol.merge(nums1, 3, nums2, 3);
	for (int i = 0; i < nums1.size(); i++) {
		cout << nums1[i] << " ";
	}
	cout << endl;
	return 0;
}
