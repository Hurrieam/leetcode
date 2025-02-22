#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

class Solution
{
public:
    int secondHighest(string s)
    {
        vector<int> sorted_nums; // 排序
        unordered_set<int> nums; // 去重
        for (auto chr : s)
        {
            if (isdigit(chr))
            {
                nums.insert(chr - 48);
            }
        }

        for (auto num : nums)
        {
            sorted_nums.push_back(num);
        }
        sort(sorted_nums.begin(), sorted_nums.end());

        if (sorted_nums.size() == 1 || sorted_nums.empty())
            return -1;

        return sorted_nums[sorted_nums.size() - 2];
    }
};

int main()
{
	Solution sol;
	string s = "dfa12321afd";
	cout << sol.secondHighest(s) << endl;
	return 0;
}
