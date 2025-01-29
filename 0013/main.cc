#include<iostream>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
	int romanToInt(string s) {
		int ans = 0;
		for (int i = 0; i < s.size(); i++) {
			switch (s[i]) {
			case 'I':
				ans++;
				if (s[i + 1] == 'V') {
					ans += 3;
					i++;
				}
				if (s[i + 1] == 'X') {
					ans += 8;
					i++;
				}
				break;
			case 'V':
				ans += 5;
				break;
			case 'X':
				ans += 10;
				if (s[i + 1] == 'L') {
					ans += 30;
					i++;
				}
				if (s[i + 1] == 'C') {
					ans += 80;
					i++;
				}
				break;
			case 'L':
				ans += 50;
				break;
			case 'C':
				ans += 100;
				if (s[i + 1] == 'D') {
					ans += 300;
					i++;
				}
				if (s[i + 1] == 'M') {
					ans += 800;
					i++;
				}
				break;
			case 'D':
				ans += 500;
				break;
			case 'M':
				ans += 1000;
				break;
			}
		}

		return ans;
	}
};

int main() {
	Solution s;
	cout << s.romanToInt("III") << endl;
	cout << s.romanToInt("IV") << endl;
	cout << s.romanToInt("IX") << endl;
	cout << s.romanToInt("LVIII") << endl;
	cout << s.romanToInt("MCMXCIV") << endl;
	return 0;
}
