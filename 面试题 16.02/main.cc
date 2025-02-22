#include<iostream>
#include<vector>
#include<unordered_set>
#include<map>

using namespace std;

class WordsFrequency {
private:
    map<string, int> word_frequency;
public:
    WordsFrequency(vector<string>& book) {

        // 初始化所有单词数为0
        for (int i = 0; i < book.size(); i++) {
            word_frequency[book[i]] = 0;
        }

        // 开始计数
        for (int i = 0; i < book.size(); i++) {
            word_frequency[book[i]]++;
        }
    }

    int get(string word) {
        return word_frequency[word];
    }
};

/**
 * Your WordsFrequency object will be instantiated and called as such:
 * WordsFrequency* obj = new WordsFrequency(book);
 * int param_1 = obj->get(word);
 */

int main() {
	vector<string> book = { "i", "have", "an", "apple", "he", "have", "a", "pen" };
	WordsFrequency* obj = new WordsFrequency(book);
	cout << obj->get("i") << endl;
	cout << obj->get("have") << endl;
	cout << obj->get("an") << endl;
	cout << obj->get("apple") << endl;
	cout << obj->get("he") << endl;
	cout << obj->get("a") << endl;
	cout << obj->get("pen") << endl;
	return 0;
}
