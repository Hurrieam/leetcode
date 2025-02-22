#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string str, str_rev;
        for (auto chr : s)
        {
            if (isdigit(chr) || isalpha(chr))
            {
                str += chr;
            }
        }
        for (auto& chr : str)
        {
            chr = tolower(chr);
        }
        str_rev = str;
        reverse(str_rev.begin(), str_rev.end());

        return str == str_rev;
    }
};

int main()
{
	string s;
	getline(cin, s);
	Solution solution;
	cout << (solution.isPalindrome(s) ? "true" : "false") << endl;
	return 0;
}
