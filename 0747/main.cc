#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
private:
    // 返回v数组中除elem外的其他元素 值传递
    vector<int> get_other_nums(vector<int> v, int elem) {
        v.erase(find(v.begin(), v.end(), elem));
        return v;
    }

    // int*vector<int>运算符重载 用以将向量中的每个元素乘以倍数然后整体返回
    vector<int> vector_multiple(int val, vector<int> v) {
        vector<int> result;
        for (auto elem : v) {
            result.push_back(val * elem);
        }
        return result;
    }

    // int>vector<int>运算符重载 用以判断int是否大于向量中的每一个元素
    bool is_num_greater_than_or_equal_to_vec(int val, vector<int> v) {
        for (auto elem : v) {
            if (val >= elem) {
                continue;
            }
            else {
                return false;
            }
        }
        return true;
    }
public:
    int dominantIndex(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        for (int index = 0; index < nums.size(); index++) {
            vector<int> other_nums = get_other_nums(nums, nums[index]);
            if (is_num_greater_than_or_equal_to_vec(nums[index], vector_multiple(2, other_nums))) {
                return index;
            }
            other_nums.clear();
        }

        return -1;
    }
};

int main() {
	Solution* obj = new Solution();
	vector<int> nums = { 3, 6, 1, 0 };
	cout << obj->dominantIndex(nums) << endl;
	nums = { 1, 2, 3, 4 };
	cout << obj->dominantIndex(nums) << endl;
	nums = { 1 };
	cout << obj->dominantIndex(nums) << endl;
	return 0;
}
