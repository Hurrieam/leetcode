#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> myVec;

        // 合并数组
        for (vector<int>::iterator i = nums1.begin(); i != nums1.end(); i++) {
            myVec.push_back(*i);
        }
        for (vector<int>::iterator i = nums2.begin(); i != nums2.end(); i++) {
            myVec.push_back(*i);
        }

        // 对合并后的数组排序
        sort(myVec.begin(), myVec.end());

        // 求数组的中位数
        return f(myVec);
    }

    double f(vector<int> vec) {
        // 若合并后的数组长度为奇数 则返回中间的数
        if (vec.size() % 2 != 0) {
            return static_cast<double>(vec[vec.size() / 2]);
        }
        // 若合并后的数组长度为偶数 则返回中间两数的平均值
        else {
            return static_cast<double>(vec[vec.size() / 2 - 1] + vec[vec.size() / 2]) / 2;
        }
    }
};

int main() {
	Solution s;
	vector<int> nums1 = { 1, 3 };
	vector<int> nums2 = { 2 };
	cout << s.findMedianSortedArrays(nums1, nums2) << endl;
	return 0;
}
