#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	int diagonalSum(vector<vector<int>>& mat) {
		int sum = 0;
		int n = mat.size();
		for (int i = 0; i < n; i++) {
			sum += mat[i][i];
			sum += mat[i][n - i - 1];
		}
		if (n % 2 != 0) {
			sum -= mat[n / 2][n / 2];
		}

		return sum;
	}
};

int main() {
	Solution sol;
	vector<vector<int>> mat = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	cout << sol.diagonalSum(mat) << endl;
	return 0;
}
