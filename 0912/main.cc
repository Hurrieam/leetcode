#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        return nums;
    }
};

int main() {
	Solution* obj = new Solution();
	vector<int> nums = { 5, 2, 3, 1 };
	vector<int> result = obj->sortArray(nums);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	cout << endl;
	return 0;
}
