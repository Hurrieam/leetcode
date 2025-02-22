#include<iostream>

using namespace std;

class Solution
{
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k)
    {
        int sum = 0;

        // put ones
        while (k > 0)
        {
            if (numOnes > 0)
            {
                sum++;
            }
            else
            {
                break;
            }
            k--;
            numOnes--;
        }
        if (k == 0)
        {
            return sum;
        }
        // put zeros
        while (k > 0)
        {
            if (numZeros <= 0)
            {
                break;
            }
            k--;
            numZeros--;
        }
        if (k == 0)
        {
            return sum;
        }
        // put negOnes
        while (k > 0)
        {
            if (numNegOnes > 0)
            {
                sum--;
            }
            else
            {
                break;
            }
            k--;
            numNegOnes--;
        }
        if (k == 0)
        {
            return sum;
        }

        return sum;
    }
};

int main()
{
	Solution sol;
	cout << sol.kItemsWithMaximumSum(4, 2, 3, 5) << endl;
	return 0;
}
