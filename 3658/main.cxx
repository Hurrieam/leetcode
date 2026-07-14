#include<iostream>
#include<numeric>

using std::gcd;

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd{}, sumEven{};
        for (int i = 1; i <= 2 * n; i++) {
            if (i % 2 != 0) {
                sumOdd+=i;
            }
            else {
                sumEven+=i;
            }
        }

        return gcd(sumOdd,sumEven);
    }
};

int main() {
    std::cout << Solution().gcdOfOddEvenSums(5) << std::endl;
}