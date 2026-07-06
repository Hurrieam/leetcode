#include<iostream>
#include<string>

class Solution {
public:
    long long sumAndMultiply(int n) {
		long long x = find_x(n);
        return find_sum(x)*x;
    }

private:
	long long find_sum(int n);
	long long find_x(int n);
	std::string str_x;
};

long long Solution::find_sum(int x) {
	long long sum = 0;
	for (int i = 0; i < str_x.size(); ++i) {
		sum += str_x[i]-'0';
	}
	return sum;
}

long long Solution::find_x(int n) {
	std::string str_n = std::to_string(n);
	for (int i = 0; i < str_n.size(); i++) {
		if (str_n[i] != '0') {
			str_x += str_n[i];
		}
	}

	if (str_x == "") {
		return 0;
	}

	return std::stoll(str_x);
}

int main() {
	Solution solution;
	int n = 10203004;
	long long result = solution.sumAndMultiply(n);
	std::cout << "The result of sum and multiply for n = " << n << " is: " << result << std::endl;
	return 0;
}