#include<iostream>

using namespace std;

class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        return (arrivalTime + delayedTime) % 24;
    }
};

int main() {
	int arrivalTime, delayedTime;
	cin >> arrivalTime >> delayedTime;
	Solution solution;
	cout << solution.findDelayedArrivalTime(arrivalTime, delayedTime) << endl;
	return 0;
}
