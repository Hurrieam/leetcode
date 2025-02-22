#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	int countServers(vector<vector<int>>& grid) {
		this->m = grid.size();
		this->n = grid[0].size();

		return this->cnt_row(grid) + this->cnt_col(grid);
	}

private:
	int m = 0;
	int n = 0;

	int cnt_row(vector<vector<int>>& grid) {
		int row = 0;
		for (int i = 0; i < this->m; i++) {
			int current_row = 0;
			for (int j = 0; j < this->n; j++) {
				if (grid[i][j] >= 1) {
					current_row++;
				}
			}
			if (current_row <= 1) {
				continue;
			}
			for (int j = 0; j < this->n; j++) {
				if (grid[i][j] == 1) {
					row++;
					grid[i][j]++;
				}
			}
		}

		return row;
	}

	int cnt_col(vector<vector<int>>& grid) {
		int col = 0;
		for (int j = 0; j < this->n; j++) {
			int current_col = 0;
			for (int i = 0; i < this->m; i++) {
				if (grid[i][j] >= 1) {
					current_col++;
				}
			}
			if (current_col <= 1) {
				continue;
			}
			for (int i = 0; i < this->m; i++) {
				if (grid[i][j] == 1) {
					col++;
					grid[i][j]++;
				}
			}
		}

		return col;
	}
};

int main() {
	Solution* obj = new Solution();
	vector<vector<int>> grid = { {1, 0}, {0, 1} };
	cout << obj->countServers(grid) << endl;
	grid = { {1, 0}, {1, 1} };
	cout << obj->countServers(grid) << endl;
	grid = { {1, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 1, 0}, {0, 0, 0, 1} };
	cout << obj->countServers(grid) << endl;
	return 0;
}
