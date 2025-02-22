#include<iostream>
#include<vector>

using namespace std;

class NumArray {
private:
    vector<int> v;
public:
    NumArray(vector<int>& nums) {
        v = nums;
    }

    int sumRange(int left, int right) {
        int sum = 0;
        for (int i = left; i <= right; i++) {
            sum += v[i];
        }

        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

int main() {
	vector<int> nums = { -2, 0, 3, -5, 2, -1 };
	NumArray* obj = new NumArray(nums);
	cout << obj->sumRange(0, 2) << endl;
	cout << obj->sumRange(2, 5) << endl;
	cout << obj->sumRange(0, 5) << endl;
	return 0;
}
