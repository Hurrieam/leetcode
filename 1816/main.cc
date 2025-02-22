#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        // 将句子按空格分开
        vector<string> v;
        string temp;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                temp.push_back(s[i]);
            }
            else {
                v.push_back(temp);
                temp.erase();
            }
        }
        v.push_back(temp);
        temp.erase();

        for (int i = 0; i < k; i++) {
            temp.append(v[i] + " ");
        }

        temp = temp.substr(0, temp.size() - 1);
        return temp;
    }
};

int main() {
	Solution sol;
	string s = "Hello how are you Contestant";
	int k = 4;
	cout << sol.truncateSentence(s, k) << endl;
	return 0;
}
