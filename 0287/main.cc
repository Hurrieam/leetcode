#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> elem_freq;
        for (int i = 0; i < nums.size(); i++) {
            elem_freq[nums[i]] = 0;
        }
        for (int i = 0; i < nums.size(); i++) {
            elem_freq[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (elem_freq[nums[i]] >= 2) {
                return nums[i];
            }
        }
        return -1;
    }
};

int main() {
	Solution solution;
	vector<int> nums = { 1, 3, 4, 2, 2 };
	cout << solution.findDuplicate(nums) << endl;
	return 0;
}
