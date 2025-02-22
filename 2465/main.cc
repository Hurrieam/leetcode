#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<double> aves;
        while (!nums.empty()) {
            auto numsb = nums.begin();
            auto numse = nums.end();
            int maxn = *max_element(numsb, numse);
            int minn = *min_element(numsb, numse);
            double ave = static_cast<double>(maxn + minn) / 2;
            aves.insert(ave);
            nums.erase(find(numsb, numse, maxn));
            nums.erase(find(numsb, numse, minn));
        }

        return static_cast<int>(aves.size());
    }
};

int main() {
	Solution sol;
	vector<int> nums = { 3, 1, 3, 4 };
	cout << sol.distinctAverages(nums) << endl;
	return 0;
}
