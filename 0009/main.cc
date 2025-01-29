#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        string reversed_str = to_string(x);
        reverse(reversed_str.begin(), reversed_str.end());

        return to_string(x) == reversed_str;
    }
};

int main() {
	Solution solution;
	int x = 121;
	cout << solution.isPalindrome(x) << endl;
	return 0;
}
