#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt = 0;
        for (int left = 0; left <= nums.size() - 2; left++) {
            for (int right = left + 1; right <= nums.size() - 1; right++) {
                if (nums[left] == nums[right] && left < right) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

int main() {
	Solution sol;
	vector<int> nums = { 1, 2, 3, 1, 1, 3 };
	cout << sol.numIdenticalPairs(nums) << endl;
	return 0;
}
