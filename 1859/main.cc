#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        string result;
        vector<string> s_vec;
        string str_temp;
        map<int, string> myMap;

        // 将原字符串按空格分开
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                str_temp.push_back(s[i]);
            }
            else {
                s_vec.push_back(str_temp);
                str_temp.erase();
            }
        }
        if (!str_temp.empty()) {
            s_vec.push_back(str_temp);
        }

        // 解析分开后每个字符串最后一个数字 将其放入map中
        for (int i = 0; i < s_vec.size(); i++) {
            int key = s_vec[i][s_vec[i].size() - 1] - 48;
            string value = s_vec[i].substr(0, s_vec[i].size() - 1);
            myMap[key] = value;
        }

        for (int i = 0; i < s_vec.size(); i++) {
            result.append(myMap[i + 1] + " ");
        }

        result = result.substr(0, result.size() - 1); // 去掉最后的空格
        return result;
    }
};

int main() {
	Solution sol;
	string s = "is2 sentence4 This1 a3";
	cout << sol.sortSentence(s) << endl;
	return 0;
}
