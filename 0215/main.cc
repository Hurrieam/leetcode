#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end(), greater<int>());

        return nums[k - 1];
    }
};

int main() {
	vector<int> nums = { 3,2,1,5,6,4 };
	int k = 2;
	Solution sol;
	cout << sol.findKthLargest(nums, k) << endl;
	return 0;
}
