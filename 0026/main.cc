#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> nums_freq;
        for (auto num : nums) {
            nums_freq[num]++;
        }
        for (auto pair : nums_freq) {
            if (pair.second > 1) {
                for (int step = 1; step <= pair.second - 1; step++) {
                    nums.erase(find(nums.begin(), nums.end(), pair.first));
                }
            }
        }
        return nums.size();
    }
};

int main() {
	Solution solution;
	vector<int> nums = { 1, 1, 1, 2, 2, 3 };
	cout << solution.removeDuplicates(nums) << endl;
	return 0;
}
