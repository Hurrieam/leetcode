#include<iostream>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		stack<char> stk;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
				stk.push(s[i]);
			}
			else {
				if (stk.empty() || (s[i] == ')' && stk.top() != '(') || (s[i] == ']' && stk.top() != '[') || (s[i] == '}' && stk.top() != '{')) {
					return false;
				}
				stk.pop();
			}
		}
		if (stk.empty()) {
			return true;
		}
		return false;
	}
};

int main() {
	string s = "()";
	Solution sol;
	cout << sol.isValid(s) << endl;
	return 0;
}
