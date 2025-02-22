#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        this->word_length = word.size();
        if (all_upper(word) || all_lower(word) || first_upper(word)) {
            return true;
        }
        return false;
    }

private:
    int word_length = 0;
    bool all_upper(string word) {
        for (int i = 0; i < word_length; i++) {
            if (word[i] >= 'a' && word[i] <= 'z') {
                return false;
            }
        }
        return true;
    }

    bool all_lower(string word) {
        for (int i = 0; i < word_length; i++) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                return false;
            }
        }
        return true;
    }

    bool first_upper(string word) {
        if (word[0] >= 'a' && word[0] <= 'z') return false;
        if (all_lower(word.substr(1, word_length - 1))) return true;
        return false;
    }
};

int main() {
    Solution* obj = new Solution();
    cout << obj->detectCapitalUse("USA") << endl;
    cout << obj->detectCapitalUse("FlaG") << endl;
    cout << obj->detectCapitalUse("leetcode") << endl;
    cout << obj->detectCapitalUse("Google") << endl;
}
