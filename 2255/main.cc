#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) {
            if (starts_with(s, words[i])) {
                cnt++;
            }
        }

        return cnt;
    }

private:
    bool starts_with(string word, string prew) {
        return word.substr(0, prew.size()) == prew;
    }
};

int main() {
	Solution sol;
	vector<string> words = { "i", "love", "leetcode", "apples" };
	string s = "iloveleetcode";
	cout << sol.countPrefixes(words, s) << endl;
	return 0;
}
