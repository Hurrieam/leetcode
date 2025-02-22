#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_cnt = 0; // 统计零的个数
        vector<int> nums_not_zero; // 把所有非零元素拷贝到新数组
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zero_cnt++;
            }
            else {
                nums_not_zero.push_back(nums[i]);
            }
        }

        nums = nums_not_zero;
        for (int i = 0; i < zero_cnt; i++) {
            nums.push_back(0);
        }
    }
};

int main() {
	Solution solution;
	vector<int> nums = { 0, 1, 0, 3, 12 };
	solution.moveZeroes(nums);
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << endl;
	}
	return 0;
}
