#include<iostream>
#include<vector>
#include<unordered_set>
#include<cmath>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        return static_cast<int>(sqrt(x));
    }
};

int main() {
	int x;
	cin >> x;
	Solution solution;
	cout << solution.mySqrt(x) << endl;
	return 0;
}
