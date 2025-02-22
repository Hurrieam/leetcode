#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
	int maximumValue(vector<string>& strs) {
		int strs_len = strs.size();  // 字符串的数量
		int* str_lens = new int[strs_len]; // 字符串长度数组
		for (int i = 0; i < strs_len; i++) {
			str_lens[i] = get_len(strs[i]);
		}

		int result = *max_element(str_lens, str_lens + strs_len);

		delete[] str_lens;
		return result;
	}

private:
	bool only_digit(string tested_str) {
		for (int i = 0; i < tested_str.size(); i++) {
			if (tested_str[i] >= '0' && tested_str[i] <= '9') {
				continue;
			}
			else {
				return false;
			}
		}

		return true;
	}

	int get_len(string str) {
		if (only_digit(str)) {
			return atoi(str.c_str());
		}
		else {
			return str.size();
		}
	}
};

int main() {
	Solution sol;
	vector<string> strs = { "15", "a", "bc", "d" };
	cout << sol.maximumValue(strs) << endl;
	return 0;
}
