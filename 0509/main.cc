#include<iostream>

using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        int* p = new int[n + 1];
        p[0] = 0;
        p[1] = 1;
        for (int i = 2; i <= n; i++) {
            p[i] = p[i - 1] + p[i - 2];
        }

        int result = p[n];

        delete[] p;
        return result;
    }
};

int main() {
    Solution* obj = new Solution();
    cout << obj->fib(2) << endl;
	cout << obj->fib(3) << endl;
	cout << obj->fib(4) << endl;

	return 0;
}
