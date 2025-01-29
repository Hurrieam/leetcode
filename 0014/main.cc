#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
private:
    // 返回最短单词的长度
    int foo(vector<string> words) {
        vector<int> word_size;
        for (auto word : words) {
            word_size.push_back(word.size());
        }

        return *min_element(word_size.begin(), word_size.end());
    }

    // 所有单词在idx对应的位置是否相等
    bool is_equal(vector<string> words, int idx) {
        char base_chr = words[0][idx];
        for (auto word : words) {
            if (word[idx] == base_chr) {
                continue;
            }
            else {
                return false;
            }
        }

        return true;
    }

public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int shortest_word_size = foo(strs);
        for (int i = 0; i < shortest_word_size; i++) {
            if (is_equal(strs, i)) {
                ans += strs[0][i];
            }
            else {
                break;
            }
        }
        return ans;
    }
};

int main() {
	vector<string> strs = { "flower", "flow", "flight" };
	Solution s;
	cout << s.longestCommonPrefix(strs) << endl;
	return 0;
}
