#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        int result = 0;
        for (int i = 0; i < 3 /* 长度限制为3 不用再调用size()了 */; i++) {
            guess[i] == answer[i] ? result++ : result = result;
        }
        return result;
    }
};

int main() {
	vector<int> guess(3);
	vector<int> answer(3);
	for (int i = 0; i < 3; i++) {
		cin >> guess[i];
	}
	for (int i = 0; i < 3; i++) {
		cin >> answer[i];
	}
	Solution solution;
	cout << solution.game(guess, answer) << endl;
	return 0;
}
