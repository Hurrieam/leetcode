#include<iostream>

using namespace std;

class Solution {
public:
    int sumNums(int n) {
        return n * (n + 1) / 2;
    }
};

int main() {
	int n;
	cin >> n;
	Solution solution;
	cout << solution.sumNums(n) << endl;
	return 0;
}
