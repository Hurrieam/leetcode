#include<iostream>
#include<bitset>
#include<string>

using std::bitset;
using std::string;

class Solution {
public:
    bool hasAlternatingBits(int n) {
		string n_str = bitset<32>(n).to_string();
		n_str.erase(0, n_str.find('1'));
		char last_bit = n_str[0];
		size_t len = n_str.length();
		for (int i = 1; i < len; i++) {
			if (last_bit == n_str[i]) {
				return false;
			}
			last_bit = n_str[i];
		}

		return true;
    }
};

int main() {
	Solution s;
	std::cout << s.hasAlternatingBits(5) << std::endl; // true
	std::cout << s.hasAlternatingBits(7) << std::endl; // false
	std::cout << s.hasAlternatingBits(11) << std::endl; // false
	std::cout << s.hasAlternatingBits(10) << std::endl; // true
	return 0;
}