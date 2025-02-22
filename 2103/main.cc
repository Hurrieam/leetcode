#include<iostream>
#include<string>

using namespace std;

class Solution
{
public:
    int countPoints(string rings)
    {
        int** map = new int* [10]; // 0~9号环
        for (int row = 0; row < 10; row++)
        { // 0~2：R G B
            map[row] = new int[3];
            for (int col = 0; col < 3; col++)
            {
                map[row][col] = 0;
            }
        }

        for (int idx = 0; idx < rings.size(); idx += 2)
        {
            switch (rings[idx])
            {
            case 'R':
                map[rings[idx + 1] - 48][0] = 1;
                break;
            case 'G':
                map[rings[idx + 1] - 48][1] = 1;
                break;
            case 'B':
                map[rings[idx + 1] - 48][2] = 1;
                break;
            }
        }

        int cnt_ans = 0;
        for (int row = 0; row < 10; row++)
        {
            if (map[row][0] == 1 && map[row][1] == 1 && map[row][2] == 1)
            {
                cnt_ans++;
            }
        }

        return cnt_ans;
    }
};

int main() {
	Solution sol;
	string rings = "R0R1R2R3R4R5R6R7R8R9G0G1G2G3G4G5G6G7G8G9B0B1B2B3B4B5B6B7B8B9";
	cout << sol.countPoints(rings) << endl;
	return 0;
}
