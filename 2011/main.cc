#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int _x = 0;
        for (int i = 0; i < operations.size(); i++) {
            switch (operations[i][0]) {
            case '+':
                _x++;
                break;
            case '-':
                _x--;
            case 'X':
                switch (operations[i][2]) {
                case '+':
                    _x++;
                    break;
                case '-':
                    _x--;
                    break;
                }
                break;
            }
        }

        return _x;
    }
};

int main() {
	Solution sol;
	vector<string> operations = { "--X", "X++", "X++" };
	cout << sol.finalValueAfterOperations(operations) << endl;
	return 0;
}
