#include<iostream>
#include<cmath>

using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        for (int x = 0; x <= 16 /* n的值被限制在了2^31-1 取对数得x的终止条件是16 再往后测试意义不大 */; x++) {
            if (pow(4, x) == n) {
                return true;
            }
        }
        return false;
    }
};

int main() {
	Solution solution;
	cout << solution.isPowerOfFour(16) << endl;
	cout << solution.isPowerOfFour(5) << endl;
	cout << solution.isPowerOfFour(1) << endl;
	cout << solution.isPowerOfFour(64) << endl;
	return 0;
}
