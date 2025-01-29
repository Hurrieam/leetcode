#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        string x_str = to_string(x);
        ::reverse(x_str.begin(), x_str.end());
        if (atoll(x_str.c_str()) > INT_MAX || atoll(x_str.c_str()) < INT_MIN) {
            return 0;
        }
        if (x < 0) {
            return -1 * atoi(x_str.c_str());
        }
        return atoi(x_str.c_str());
    }
};

int main() {
	Solution solution;
	int x = 123;
	cout << solution.reverse(x) << endl;
	return 0;
}
