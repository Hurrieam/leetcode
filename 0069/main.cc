#include<iostream>

using namespace std;

class Solution {
public:
	int mySqrt(int x) {
		return static_cast<int>(sqrt(x));
	}
};

int main() {
	Solution sol;
	cout << sol.mySqrt(4) << endl;
	cout << sol.mySqrt(8) << endl;
	return 0;
}
