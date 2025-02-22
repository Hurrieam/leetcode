#include<iostream>

using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int ans = 0;
        while (num > 0) {
            if (num % 2 == 0) num /= 2;
            else num -= 1;

            ans++;
        }

        return ans;
    }
};

int main() {
	Solution* obj = new Solution();
	cout << obj->numberOfSteps(14) << endl;
	cout << obj->numberOfSteps(8) << endl;
	cout << obj->numberOfSteps(123) << endl;
	return 0;
}
