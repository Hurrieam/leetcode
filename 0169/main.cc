#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> elem_freq;
        for (int i = 0; i < nums.size(); i++) {
            elem_freq[nums[i]] = 0;
        }

        for (int i = 0; i < nums.size(); i++) {
            elem_freq[nums[i]]++;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (elem_freq[nums[i]] > nums.size() / 2) {
                return nums[i];
            }
        }

        return -1;
    }
};

int main() {
	vector<int> nums = { 3,2,3 };
	Solution sol;
	cout << sol.majorityElement(nums) << endl;
	return 0;
}
