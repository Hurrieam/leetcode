#include<iostream>
#include<vector>

using std::vector;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
		int ans{},altitude{};

		for (int g : gain) {
			altitude += g;
			if (altitude > ans) {
				ans = altitude;
			}
		}

		return ans;
    }
};

int main() {
	Solution solution;
	vector<int> gain = { -5, 1, 5, 0, -7 };
	int result = solution.largestAltitude(gain);
	std::cout << "Largest Altitude: " << result << std::endl;
	return 0;
}