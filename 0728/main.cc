#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for (int num = left; num <= right; num++) {
            if (is_dividing_number(num)) {
                ans.push_back(num);
            }
        }

        return ans;
    }

private:
    bool is_dividing_number(int num) {
        if (num == 0) return false;
        string num_str = to_string(num);
        for (int i = 0; i < num_str.size(); i++) {
            if (num_str[i] - '0' == 0) return false;
            if (num % (num_str[i] - '0') == 0) {
                continue;
            }
            else {
                return false;
            }
        }

        return true;
    }
};

int main() {
	Solution* obj = new Solution();
	vector<int> result = obj->selfDividingNumbers(1, 22);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	cout << endl;
	return 0;
}
