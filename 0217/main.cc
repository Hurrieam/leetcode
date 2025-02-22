#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> elem_freq;
        for (int i = 0; i < nums.size(); i++) {
            elem_freq[nums[i]] = 0;
        }

        for (int i = 0; i < nums.size(); i++) {
            elem_freq[nums[i]]++;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (elem_freq[nums[i]] >= 2) {
                return true;
            }
        }
        return false;
    }
};

int main() {
	Solution solution;
	vector<int> nums = { 1, 2, 3, 1 };
	cout << solution.containsDuplicate(nums) << endl;
	return 0;
}
