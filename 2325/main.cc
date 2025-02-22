#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
	string decodeMessage(string key, string message) {
		char pwd[2][26] = { 0 };
		int idx = 0;
		string ans;
		for (int i = 0; i < key.size(); i++) {
			if (key[i] == ' ') {
				continue;
			}
			if (find(pwd[0], pwd[0] + 26, key[i]) == pwd[0] + 26) {
				pwd[0][idx] = key[i];
				pwd[1][idx] = idx + 'a';
				idx++;
			}
		}

		for (int i = 0; i < message.size(); i++) {
			if (message[i] == ' ') {
				ans += ' ';
			}
			else {
				ans += *(find(pwd[0], pwd[0] + 26, message[i]) + 26);
			}
		}

		return ans;
	}
};

int main() {
	Solution sol;
	string key = "the quick brown fox";
	string message = "jumps over the lazy dog";
	cout << sol.decodeMessage(key, message) << endl;
	return 0;
}
