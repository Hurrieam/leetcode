#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> vec;
        int len = nums.size(); // 涉及到长度变换 需预先把长度求出来 以固定最外层的循环次数
        for (int i = 0; i < len; i++) {
            // 若i是奇数 则vec[i]也得是奇数
            if (i % 2 != 0) {
                // 找出一个奇数填入 在原向量中清除该奇数 此内层循环次数与当前长度有关
                for (int j = 0; j < nums.size(); j++) {
                    if (nums[j] % 2 != 0) {
                        vec.push_back(nums[j]);
                        nums.erase(nums.begin() + j);
                        break;
                    }
                }

            }
            // 若i是偶数 则vec[i]也得是偶数
            else {
                // 找出一个偶数填入 在原向量中清除该偶数 此内层循环次数与当前长度有关
                for (int j = 0; j < nums.size(); j++) {
                    if (nums[j] % 2 == 0) {
                        vec.push_back(nums[j]);
                        nums.erase(nums.begin() + j);
                        break;
                    }
                }
            }
        }

        return vec;
    }
};

int main() {
	Solution* obj = new Solution();
	vector<int> nums = { 4, 2, 5, 7 };
	vector<int> result = obj->sortArrayByParityII(nums);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	cout << endl;
	return 0;
}
