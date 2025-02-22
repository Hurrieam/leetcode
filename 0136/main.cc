#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> num_frequency;
        for (int i = 0; i < nums.size(); i++) {
            num_frequency[nums[i]] = 0;
        }
        for (int i = 0; i < nums.size(); i++) {
            num_frequency[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (num_frequency[nums[i]] == 1) {
                return nums[i];
            }
        }

        return -1;
    }
};

int main() {
	vector<int> nums = { 2,2,1 };
	Solution sol;
	cout << sol.singleNumber(nums) << endl;
	return 0;
}
