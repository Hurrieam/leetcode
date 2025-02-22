#include<iostream>

using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;

        int* space = new int[n + 1];
        space[0] = 0;
        space[1] = 1;
        space[2] = 1;
        for (int i = 3; i < n + 1; i++) {
            space[i] = space[i - 3] + space[i - 2] + space[i - 1];
        }

        int result = space[n];

        delete[] space;

        return result;
    }
};

int main() {
	Solution* obj = new Solution();
	cout << obj->tribonacci(4) << endl;
	cout << obj->tribonacci(25) << endl;
	return 0;
}
