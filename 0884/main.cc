#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

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
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans, s1_split, s2_split;
        unordered_map<string, int> word_freq;
        s1_split = split(s1);
        s2_split = split(s2);
        for (auto word : s1_split) {
            word_freq[word]++;
        }
        for (auto word : s2_split) {
            word_freq[word]++;
        }
        for (auto pair : word_freq) {
            if (pair.second == 1) {
                ans.push_back(pair.first);
            }
        }

        return ans;
    }
};

int main() {
	Solution* obj = new Solution();
	vector<string> result = obj->uncommonFromSentences("this apple is sweet", "this apple is sour");
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	cout << endl;
	result = obj->uncommonFromSentences("apple apple", "banana");
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	cout << endl;
	return 0;
}
