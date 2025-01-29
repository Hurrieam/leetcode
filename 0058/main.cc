#include<iostream>
#include<vector>

using namespace std;

class Solution {
private:
    vector<string> split(string sentence) {
        string buf;
        vector<string> result;
        for (auto chr : sentence) {
            if (chr != ' ') {
                buf += chr;
            }
            else {
                if (!buf.empty()) {
                    result.push_back(buf);
                    buf.clear();
                }
            }
        }
        if (!buf.empty()) {
            result.push_back(buf);
            buf.clear();
        }

        return result;
    }
public:
    int lengthOfLastWord(string s) {
        vector<string> word_split = split(s);
        return word_split[word_split.size() - 1].size();
    }
};

int main() {
	Solution solution;
	string s = "Hello World";
	cout << solution.lengthOfLastWord(s) << endl;
	return 0;
}
