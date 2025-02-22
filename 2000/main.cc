#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        // 找到了
        if (find(word.begin(), word.end(), ch) != word.end())
            reverse(word.begin(), find(word.begin(), word.end(), ch) + 1);

        return word;
    }
};

int main() {
	Solution sol;
	string word = "abcdef";
	char ch = 'd';
	cout << sol.reversePrefix(word, ch) << endl;
	return 0;
}
