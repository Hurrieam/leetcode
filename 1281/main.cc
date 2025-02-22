#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        string n_str = to_string(n);
        for (int i = 0; i < n_str.size(); i++) {
            product *= n_str[i] - '0';
            sum += n_str[i] - '0';
        }

        return product - sum;
    }
};

int main() {
	Solution* obj = new Solution();
	cout << obj->subtractProductAndSum(234) << endl;
	cout << obj->subtractProductAndSum(4421) << endl;
	return 0;
}
