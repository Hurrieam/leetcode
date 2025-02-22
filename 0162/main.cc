#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max = nums[0];
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            // 如果索引到了第一个或最后一个 边界条件处理
            if (i == 0 || i == nums.size() - 1) {
                if (nums[i] > max) {
                    max = nums[i];
                    result = i;
                }
            }
            else {
                if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
                    max = nums[i];
                    result = i;
                }
            }
        }
        return result;
    }
};

int main() {
	vector<int> nums = { 1,2,3,1 };
	Solution sol;
	cout << sol.findPeakElement(nums) << endl;
	return 0;
}
