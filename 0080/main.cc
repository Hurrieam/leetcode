#include<iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> nums_freq;
        for (auto num : nums) {
            nums_freq[num]++;
        }
        for (auto pair : nums_freq) {
            if (pair.second > 2) {
                for (int step = 1; step <= pair.second - 2; step++) {
                    nums.erase(find(nums.begin(), nums.end(), pair.first));
                }
            }
        }
        return nums.size();
    }
};

int main() {
	Solution sol;
	vector<int> nums = { 1, 1, 1, 2, 2, 3 };
	cout << sol.removeDuplicates(nums) << endl;
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
	return 0;
}
