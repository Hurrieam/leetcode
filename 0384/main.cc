#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

class Solution {
private:
    vector<int> nums;
public:
    Solution(vector<int>& nums) {
        this->nums = nums;
    }

    vector<int> reset() {
        return this->nums;
    }

    vector<int> shuffle() {
        vector<int> nums_copy = this->nums;
        for (int i = 0; i < nums_copy.size(); i++) {
            swap(nums_copy[i], nums_copy[rand() % nums_copy.size()]);
        }

        return nums_copy;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */

int main() {
	vector<int> nums = { 1, 2, 3 };
	Solution* obj = new Solution(nums);
	vector<int> param_1 = obj->reset();
	vector<int> param_2 = obj->shuffle();
	for (int i = 0; i < param_1.size(); i++) {
		cout << param_1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < param_2.size(); i++) {
		cout << param_2[i] << " ";
	}
	cout << endl;
	return 0;
}
