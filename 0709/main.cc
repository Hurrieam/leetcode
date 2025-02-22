#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        string result;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                result.push_back(s[i] + 32);
            }
            else {
                result.push_back(s[i]);
            }
        }
        return result;
    }
};

int main() {
	Solution* obj = new Solution();
	cout << obj->toLowerCase("Hello") << endl;
	cout << obj->toLowerCase("here") << endl;
	cout << obj->toLowerCase("LOVELY") << endl;
	return 0;
}
