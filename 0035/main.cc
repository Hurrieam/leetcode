#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto iter = find(nums.begin(), nums.end(), target);

        // 找到了
        if (iter != nums.end()) return iter - nums.begin();

        // 没找到
        if (target < nums[0]) return 0;
        for (int idx = 0; idx < nums.size() - 1; idx++) {
            if (nums[idx] < target && nums[idx + 1] > target) {
                return idx + 1;
            }
        }
        return nums.size();
    }
};

int main() {
	Solution solution;
	vector<int> nums = { 1, 3, 5, 6 };
	int target = 5;
	cout << solution.searchInsert(nums, target) << endl;
	return 0;
}
