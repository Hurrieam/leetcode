#include<iostream>

using namespace std;

class Solution {
public:
    int multiply(int A, int B) {
        return A * B;
    }
};

int main() {
	int A, B;
	cin >> A >> B;
	Solution solution;
	cout << solution.multiply(A, B) << endl;
	return 0;
}
