#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str_1, str_2;
        for (int i = 0; i < word1.size(); i++) {
            str_1.append(word1[i]);
        }

        for (int i = 0; i < word2.size(); i++) {
            str_2.append(word2[i]);
        }

        return str_1 == str_2;
    }
};

int main() {
	Solution sol;
	vector<string> word1 = { "ab", "c" };
	vector<string> word2 = { "a", "bc" };
	cout << sol.arrayStringsAreEqual(word1, word2) << endl;
	return 0;
}
