#include<iostream>
#include<string>
#include<map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        // 统计字符串中各个字母出现的次数
        map<char, int> chr_freq;
        for (int i = 0; i < s.size(); i++) {
            chr_freq[s[i]] = 0;
        }
        for (int i = 0; i < s.size(); i++) {
            chr_freq[s[i]]++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (chr_freq[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
	Solution* obj = new Solution();
	cout << obj->firstUniqChar("leetcode") << endl;
	cout << obj->firstUniqChar("loveleetcode") << endl;
	cout << obj->firstUniqChar("aabb") << endl;
	return 0;
}
