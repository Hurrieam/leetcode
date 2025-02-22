#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isUnique(string astr) {
        unordered_map<char, int> chr_freq;
        for (auto chr : astr) {
            chr_freq[chr]++;
        }

        for (auto pair : chr_freq) {
            if (pair.second > 1) {
                return false;
            }
        }

        return true;
    }
};

int main() {
	string astr;
	cin >> astr;
	Solution solution;
	cout << (solution.isUnique(astr) ? "true" : "false") << endl;
	return 0;
}
