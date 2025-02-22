#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {

public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> myMap;
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            myMap[nums[i]] = 0;
        }
        for (int i = 0; i < nums.size(); i++) {
            myMap[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (myMap[nums[i]] == 1) {
                result += nums[i];
            }
        }
        return result;
    }
};

int main() {
	Solution sol;
	vector<int> nums = { 1, 2, 3, 2 };
	cout << sol.sumOfUnique(nums) << endl;
	return 0;
}
