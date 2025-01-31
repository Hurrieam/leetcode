#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
	string reverseStr(string s, int k) {
		for (int i = 0; i < s.size(); i += 2 * k) {
			reverse(s.begin() + i, s.begin() + min(i + k, (int)s.size()));
		}
		return s;
	}
};

int main() {
	Solution s;
	cout << s.reverseStr("abcdefg", 2) << endl;
	return 0;
}
