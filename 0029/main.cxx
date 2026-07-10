#include<iostream>

class Solution {
public:
    int divide(int dividend, int divisor) {
		long ans = (long)dividend / (long)divisor;
        if (ans > INT_MAX) return INT_MAX;
        if (ans < INT_MIN) return INT_MIN;
        return ans;
    }
};

int main() {
	std::cout << Solution().divide(2147483647, -1) << std::endl;
}