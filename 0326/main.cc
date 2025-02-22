#include<iostream>
#include<cmath>

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        for (int x = 0; x <= 20 /* n的值被限制在了2^31-1 取对数得x的终止条件是20 再往后测试意义不大 */; x++) {
            if (pow(3, x) == n) {
                return true;
            }
        }
        return false;
    }
};

int main() {
	Solution solution;
	cout << solution.isPowerOfThree(27) << endl;
	cout << solution.isPowerOfThree(0) << endl;
	cout << solution.isPowerOfThree(9) << endl;
	cout << solution.isPowerOfThree(45) << endl;
	return 0;
}
