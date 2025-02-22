#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	vector<int> applyOperations(vector<int>& nums) {
		vector<int> ans;
		int zeros_cnt = 0;
		int nums_cnt = nums.size();
		for (int i = 0; i < nums_cnt - 1; i++) {
			if (nums[i] == nums[i + 1]) {
				nums[i] *= 2;
				nums[i + 1] = 0;
			}
			if (nums[i] != 0) {
				ans.push_back(nums[i]);
			}
			else {
				zeros_cnt++;
			}
		}

		if (nums[nums_cnt - 1] == 0) {
			zeros_cnt++;
		}
		else {
			ans.push_back(nums[nums_cnt - 1]);
		}

		for (int i = 0; i < zeros_cnt; i++) {
			ans.push_back(0);
		}

		return ans;
	}
};

int main() {
	Solution sol;
	vector<int> nums = { 1, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
	vector<int> ans = sol.applyOperations(nums);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
