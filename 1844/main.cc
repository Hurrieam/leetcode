#include<iostream>
#include<string>

using namespace std;

class Solution {
private:
    char shift(char c, int x) {
        x -= 48;
        return c + x;
    }
public:
    string replaceDigits(string s) {
        for (int i = 1; i <= s.size() - 1; i += 2) {
            s[i] = shift(s[i - 1], s[i]);
        }
        return s;
    }
};

int main() {
	Solution sol;
	string s = "a1c1e1";
	cout << sol.replaceDigits(s) << endl;
	return 0;
}
