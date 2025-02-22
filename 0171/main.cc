#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        int cttl_size = columnTitle.size();
        for (int i = 0; i < cttl_size; i++) {
            sum += (columnTitle[i] - 64) * pow(26, cttl_size - i - 1);
        }

        return sum;
    }
};

int main() {
	Solution sol;
	cout << sol.titleToNumber("ZY") << endl;
	return 0;
}
