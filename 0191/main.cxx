#include<iostream>
#include<string>
#include<bitset>

using std::string;
using std::bitset;

class Solution {
public:
    int hammingWeight(int n) {
		int ans{};
		string n_str = bitset<32>(n).to_string();
		n_str.erase(0, n_str.find_first_not_of('0'));
		for (char c : n_str) {
			if (c == '1') {
				ans++;
			}
		}

		return ans;
    }
};

int main() {
	Solution solution;
	int n = 11; // Example input
	int result = solution.hammingWeight(n);
	std::cout << "Hamming Weight of " << n << " is: " << result << std::endl;
	return 0;
}