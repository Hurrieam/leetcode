#include<iostream>

class Solution {
public:
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
	int a, b;
	std::cin >> a >> b;
	Solution solution;
	std::cout << solution.add(a, b) << std::endl;
	return 0;
}
