#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> myVec;

        // �ϲ�����
        for (vector<int>::iterator i = nums1.begin(); i != nums1.end(); i++) {
            myVec.push_back(*i);
        }
        for (vector<int>::iterator i = nums2.begin(); i != nums2.end(); i++) {
            myVec.push_back(*i);
        }

        // �Ժϲ������������
        sort(myVec.begin(), myVec.end());

        // ���������λ��
        return f(myVec);
    }

    double f(vector<int> vec) {
        // ���ϲ�������鳤��Ϊ���� �򷵻��м����
        if (vec.size() % 2 != 0) {
            return static_cast<double>(vec[vec.size() / 2]);
        }
        // ���ϲ�������鳤��Ϊż�� �򷵻��м�������ƽ��ֵ
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
