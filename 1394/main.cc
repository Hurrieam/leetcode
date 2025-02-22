#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> luckies;
        unordered_map<int, int> num_freq;
        for (auto num : arr) {
            num_freq[num]++;
        }
        for (auto pair : num_freq) {
            if (pair.first == pair.second) {
                luckies.push_back(pair.first);
            }
        }
        sort(luckies.begin(), luckies.end());

        if (luckies.size() == 0) return -1;

        return luckies[luckies.size() - 1];
    }
};

int main() {
	Solution sol;
	vector<int> arr = { 2, 2, 3, 4 };
	cout << sol.findLucky(arr) << endl;
	return 0;
}
