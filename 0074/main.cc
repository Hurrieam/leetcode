#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> mat;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                mat.push_back(matrix[i][j]);
            }
        }

        return find(mat.begin(), mat.end(), target) != mat.end();
    }
};

int main() {
	Solution sol;
	vector<vector<int>> matrix = {
		{1, 3, 5, 7},
		{10, 11, 16, 20},
		{23, 30, 34, 60}
	};
	cout << sol.searchMatrix(matrix, 3) << endl;
	cout << sol.searchMatrix(matrix, 13) << endl;
	return 0;
}
