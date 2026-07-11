#include<iostream>
#include<string>
#include<vector>

using std::string, std::vector;

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans{};
        for (string pattern : patterns) {
            if (word.find(pattern) != string::npos) {
				ans++;
            }
        }

        return ans;
    }
};

int main() {
	Solution solution;
	vector<string> patterns = { "a", "b", "c" };
	string word = "aaaaabbbbb";
	int result = solution.numOfStrings(patterns, word);
	std::cout << "Result: " << result << std::endl;
	return 0;
}