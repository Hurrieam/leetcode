#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	vector<int> circularGameLosers(int n, int k) {
		bool* players = new bool[n];
		vector<int> losers;
		memset(players, false, sizeof(bool) * n);
		int idx = 0;
		int i = 1;
		while (1) {
			if (players[idx] == true) {
				break;
			}
			players[idx] = true;
			idx = (idx + i * k) % n;
			i++;
		}

		for (int j = 0; j < n; j++) {
			if (players[j] == false) {
				losers.push_back(j + 1);
			}
		}

		delete[] players;
		return losers;
	}
};

int main() {
	int n, k;
	cin >> n >> k;
	Solution solution;
	vector<int> losers = solution.circularGameLosers(n, k);
	for (int i = 0; i < losers.size(); i++) {
		cout << losers[i] << " ";
	}
	cout << endl;
	return 0;
}
