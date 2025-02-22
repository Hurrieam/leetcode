#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int shorter_size = word1.size() <= word2.size() ? word1.size() : word2.size();

        string word_arr[2] = { word1, word2 };

        string result;

        // 外层循环控制循环次数
        for (int i = 0; i < shorter_size; i++) {
            // 内层循环控制要添加的是哪里面的对应字符
            for (int j = 0; j < 2; j++) {
                result.push_back(word_arr[j][i]);
            }
        }

        // 额外处理多出来的字符
        if (word1.size() != word2.size()) {
            // 求出两串字符长度的差值
            int substract = abs(word1.size() - word2.size());

            // 求出较长的字符串
            string longer_str = word1.size() >= word2.size() ? word1 : word2;
            longer_str = longer_str.substr(longer_str.size() - substract, substract);

            for (int i = 0; i < longer_str.size(); i++) {
                result.push_back(longer_str[i]);
            }
        }

        return result;
    }

    // 求绝对值函数
    int abs(int num) {
        return num >= 0 ? num : -num;
    }
};

int main() {
	Solution sol;
	string word1 = "abc";
	string word2 = "pqr";
	cout << sol.mergeAlternately(word1, word2) << endl;
	return 0;
}
