#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        if (numRows == 1)
            return { {1} };
        if (numRows == 2)
            return { {1}, {1, 1} };

        vector<vector<int>> ans = { {1}, {1, 1} };

        // 行数
        for (int row = 3; row <= numRows; row++)
        {
            vector<int> row_vec = { 1 };
            // 列数
            for (int col = 1; col <= row - 2; col++)
            {
                row_vec.push_back(ans[row - 1 - 1][col - 1] + ans[row - 1 - 1][col]);
            }
            row_vec.push_back(1);
            ans.push_back(row_vec);
        }

        return ans;
    }
};

int main()
{
	Solution sol;
	vector<vector<int>> result = sol.generate(5);
	for (int i = 0; i < result.size(); i++)
	{
		for (int j = 0; j < result[i].size(); j++)
		{
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
