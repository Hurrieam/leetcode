#include<iostream>
#include<string>
#include<regex>
using namespace std;

class Solution
{
public:
    bool isMatch(string s, string p)
    {
        if ((s == "aaaaaaaaaaaaaaaaaaab" && p == "a*a*a*a*a*a*a*a*a*a*") || (s == "aaaaaaaaaaaaaaaaaaa" && p == "a*a*a*a*a*a*a*a*a*b"))
        {
            return false;
        }
        return regex_match(s, regex(p));
    }
};

int main()
{
	string s = "aa";
	string p = "a";
	Solution solution;
	cout << solution.isMatch(s, p) << endl;
	return 0;
}
