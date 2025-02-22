#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int cnt = 0;
        for (int i = 0; i < hours.size(); i++) {
            if (hours[i] >= target) {
                cnt++;
            }
        }

        return cnt;
    }
};

int main() {
	int n, target;
	cin >> n >> target;
	vector<int> hours(n);
	for (int i = 0; i < n; i++) {
		cin >> hours[i];
	}
	Solution solution;
	cout << solution.numberOfEmployeesWhoMetTarget(hours, target) << endl;
	return 0;
}
