#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt = 0;
        for (int i = 0; i < items.size(); i++) {
            if ((ruleKey == "type" && ruleValue == items[i][0]) || (ruleKey == "color" && ruleValue == items[i][1]) || (ruleKey == "name" && ruleValue == items[i][2])) {
                cnt++;
            }
        }

        return cnt;
    }
};

int main() {
	Solution sol;
	vector<vector<string>> items = { { "phone", "blue", "pixel" }, { "computer", "silver", "lenovo" }, { "phone", "gold", "iphone" } };
	string ruleKey = "color";
	string ruleValue = "silver";
	cout << sol.countMatches(items, ruleKey, ruleValue) << endl;
	return 0;
}
