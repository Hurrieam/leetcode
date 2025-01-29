#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "") {
            return 0;
        }
        return haystack.find(needle) == string::npos ? -1 : haystack.find(needle);
    }
};

int main() {
	Solution solution;
	string haystack = "hello";
	string needle = "ll";
	cout << solution.strStr(haystack, needle) << endl;
	return 0;
}
