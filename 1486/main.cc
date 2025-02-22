#include <iostream>

using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int* nums = new int[n];
        for (int idx = 0; idx < n; idx++) {
            nums[idx] = start + 2 * idx;
        }
        int ans = nums[0];
        for (int idx = 1; idx < n; idx++) {
            ans ^= nums[idx];
        }

        delete[] nums;
        return ans;
    }
};

int main() {
	Solution sol;
	cout << sol.xorOperation(5, 0) << endl;
	return 0;
}
