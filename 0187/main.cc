#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

class Solution {
public:
	vector<string> findRepeatedDnaSequences(string s) {
		vector<string> res;
		unordered_map<string, int> substr_freq;
		for (int i = 0; i < s.size(); i++) {
			substr_freq[s.substr(i, 10)]++;
		}

		for (auto i : substr_freq) {
			if (i.second > 1) {
				res.push_back(i.first);
			}
		}

		return res;
	}
};

int main() {
	string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
	Solution sol;
	vector<string> result = sol.findRepeatedDnaSequences(s);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	cout << endl;
	return 0;
}
