#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;

        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }

        return result;
    }
};

ostream& operator<<(ostream& os, vector<int> v) {
    os << "[";
    for (int i = 0; i < v.size(); i++) {
        os << v[i];
        if (i != v.size() - 1) {
            os << ", ";
        }
    }
    os << "]";
    return os;
}

int main() {
	Solution solution;
	vector<int> nums = { 2, 7, 11, 15 };
	int target = 9;
	cout << solution.twoSum(nums, target) << endl;
	return 0;
}
