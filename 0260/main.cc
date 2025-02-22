#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> result;
        map<int, int> elem_freq;
        for (int i = 0; i < nums.size(); i++) {
            elem_freq[nums[i]] = 0;
        }
        for (int i = 0; i < nums.size(); i++) {
            elem_freq[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (elem_freq[nums[i]] == 1) {
                result.push_back(nums[i]);
            }
        }

        return result;
    }
};

int main() {
	Solution solution;
	vector<int> nums = { 1, 2, 1, 3, 2, 5 };
	vector<int> result = solution.singleNumber(nums);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << endl;
	}
	return 0;
}
