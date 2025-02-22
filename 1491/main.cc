#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        salary.erase(max_element(salary.begin(), salary.end()));
        salary.erase(min_element(salary.begin(), salary.end()));

        auto sum = 0;
        for (int i = 0; i < salary.size(); i++) {
            sum += salary[i];
        }

        return static_cast<double>(sum) / salary.size();
    }
};

int main() {
	Solution sol;
	vector<int> salary = { 4000, 3000, 1000, 2000 };
	cout << sol.average(salary) << endl;
	return 0;
}
