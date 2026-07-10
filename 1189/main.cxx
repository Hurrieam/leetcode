#include<iostream>
#include<string>

using std::string;
using std::min;

class Solution {
public:
	int maxNumberOfBalloons(string text) {
		int count[5]{};
		for (char c : text) {
			switch (c) {
			case 'b':
				count[0]++;
				break;
			case 'a':
				count[1]++;
				break;
			case 'l':
				count[2]++;
				break;
			case 'o':
				count[3]++;
				break;
			case 'n':
				count[4]++;
				break;
			}
		}
		count[2] /= 2;
		count[3] /= 2;
		return min({ count[0], count[1], count[2], count[3], count[4] });
	}
};

int main() {
	Solution solution;
	string text = "loonbalxballpoon";
	int result = solution.maxNumberOfBalloons(text);
	std::cout << "Maximum number of 'balloon' that can be formed: " << result << std::endl;
	return 0;
}