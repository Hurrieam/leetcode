#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> count;
        vector<int> result;
        for (int num : nums1) {
            count[num]++;
        }
        for (int num : nums2) {
            if (count[num] > 0) {
                result.push_back(num);
                count[num]--;
            }
        }
        return result;
    }
};

ostream& operator<<(ostream& os, const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        os << v[i] << " ";
    }
    return os;
}

int main() {
    Solution solution;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = solution.intersect(nums1, nums2);
    cout << result << endl;
    return 0;
}
