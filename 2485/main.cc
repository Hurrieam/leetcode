#include<iostream>

using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        for (int i = 1; i <= n; i++) {
            int sum_left = 0;
            int sum_right = 0;
            for (int j = 1; j <= i; j++) {
                sum_left += j;
            }
            for (int j = i; j <= n; j++) {
                sum_right += j;
            }
            if (sum_left == sum_right) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
	Solution sol;
	cout << sol.pivotInteger(7) << endl;
	return 0;
}
