#include<iostream>

using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

inline bool isBadVersion(int version) {
	return version >= 4;
}

class Solution {
public:
	int firstBadVersion(int n) {
		while (isBadVersion(n--));

		return n + 2;
	}
};

int main() {
	Solution solution;
	cout << solution.firstBadVersion(5) << endl;
	return 0;
}
