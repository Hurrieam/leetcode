#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
	string convertToTitle(int columnNumber) {
		string res;
		while (columnNumber > 0) {
			columnNumber--;
			res += columnNumber % 26 + 'A';
			columnNumber /= 26;
		}
		reverse(res.begin(), res.end());
		return res;
	}
};

int main() {
	Solution sol;
	cout << sol.convertToTitle(701) << endl;
	return 0;
}
