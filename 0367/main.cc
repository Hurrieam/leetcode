#include<iostream>
#include<cmath>

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        return static_cast<int>(sqrt(num)) * static_cast<int>(sqrt(num)) == num;
    }
};

int main() {
	Solution solution;
	cout << solution.isPerfectSquare(16) << endl;
	cout << solution.isPerfectSquare(14) << endl;
	cout << solution.isPerfectSquare(1) << endl;
	cout << solution.isPerfectSquare(808201) << endl;
	return 0;
}
