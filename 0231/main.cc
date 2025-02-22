#include<iostream>
#include<cmath>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int x = 0; x <= 31 /* n的值被限制在了2^31-1 取对数得x的终止条件是31 再往后测试意义不大 */; x++) {
            if (pow(2, x) == n) {
                return true;
            }
        }
        return false;
    }
};

int main() {
	Solution solution;
	cout << solution.isPowerOfTwo(1) << endl;
	cout << solution.isPowerOfTwo(16) << endl;
	cout << solution.isPowerOfTwo(218) << endl;
	return 0;
}
