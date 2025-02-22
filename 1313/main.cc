#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        // 外层循环：nums元素个数必为偶数 所以设置步长为2 每次遍历到两个数
        for (int i = 0; i < nums.size() - 1; i += 2) {
            // 内层循环：循环次数为每次外层循环遍历到的两个数中前面的那个数
            for (int j = 0; j < nums[i]; j++) {
                result.push_back(nums[i + 1]);
            }
        }
        return result;
    }
};

int main() {
	Solution* obj = new Solution();
	vector<int> nums = { 1, 2, 3, 4 };
	vector<int> result = obj->decompressRLElist(nums);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	cout << endl;
	return 0;
}
