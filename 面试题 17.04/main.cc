#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int>& nums)
    {
        int n = *max_element(nums.begin(), nums.end());
        int* num_freq = new int[n + 1];

        for (int i = 0; i <= n; i++)
        {
            num_freq[i] = 0;
        }

        for (auto num : nums)
        {
            num_freq[num]++;
        }

        for (int i = 0; i <= n; i++)
        {
            if (num_freq[i] == 0)
            {
                delete[] num_freq;
                return i;
            }
        }

        delete[] num_freq;
        return nums.size();
    }
};

int main()
{
	vector<int> nums;
	int num;
	while (cin >> num)
	{
		nums.push_back(num);
	}
	Solution solution;
	cout << solution.missingNumber(nums) << endl;
	return 0;
}
