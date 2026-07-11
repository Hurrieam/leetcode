#include<iostream>
#include<vector>
#include<bitset>
#include<string>

using std::vector, std::bitset, std::string;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            string bin = bitset<17>(i).to_string();
            bin.erase(0, bin.find_first_not_of("0"));
            for (char c : bin) {
                if (c == '1') {
                    ans[i]++;
                }
            }
        }
        return ans;
    }
};

int main() {
	Solution s;
	auto v = s.countBits(100000);
    for (auto elem : v) {
		std::cout << elem << " ";
    }
	return 0;
}