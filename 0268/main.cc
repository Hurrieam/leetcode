#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int, int> elem_freq; // 记录各个数字出现的次数
        for (int i = 0; i < nums.size(); i++) {
            elem_freq[nums[i]] = 0;
        }
        for (int i = 0; i < nums.size(); i++) {
            elem_freq[nums[i]]++;
        }

        int n = *max_element(nums.begin(), nums.end());
        for (int i = 0; i <= n; i++) {
            if (elem_freq[i] == 0) {
                return i;
            }
        }

        return n + 1;
    }
};

int main() {
	Solution solution;
	vector<int> nums = { 3, 0, 1 };
	cout << solution.missingNumber(nums) << endl;
	return 0;
}
