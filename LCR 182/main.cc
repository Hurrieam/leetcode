#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        int s_size = s.size();
        for (int i = 0; i < n; i++) {
            s += s[0];
            s = s.substr(1, s_size + 1);
        }

        return s;
    }
};

int main() {
	string s;
	int n;
	cin >> s >> n;
	Solution solution;
	cout << solution.reverseLeftWords(s, n) << endl;
	return 0;
}
