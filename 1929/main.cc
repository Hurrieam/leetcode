#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int origin_size = nums.size();
        for (int i = 0; i < origin_size; i++) {
            nums.push_back(nums[i]);
        }

        return nums;
    }
};

int main() {
	Solution sol;
	vector<int> nums = { 1, 2, 1 };
	vector<int> ans = sol.getConcatenation(nums);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
