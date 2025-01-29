#include <iostream>
#include <string>
#include <climits>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long long ans = atoll(s.c_str());
        if (ans > INT_MAX) {
            return INT_MAX;
        }
        if (ans < INT_MIN) {
            return INT_MIN;
        }

        return ans;
    }
};

int main() {
	Solution solution;
	string s = "42";
	cout << solution.myAtoi(s) << endl;
	return 0;
}
