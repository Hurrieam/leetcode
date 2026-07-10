#include<iostream>

class Solution {
private:
		double hourAngle[12] = {30,60,90,120,150,180,210,240,270,300,330,360 };
		double minuteAngle[60] = {6,12,18,24,30,36,42,48,54,60,66,72,78,84,90,96,102,108,114,120,126,132,138,144,150,156,162,168,174,180,
								186,192,198,204,210,216,222,228,234,240,246,252,258,264,270,276,282,288,294,
								300,306,312,318,324,330,336,342,348,354,360 };
public:
	double angleClock(int hour, int minutes) {
		double hourOffset = .5*minutes;
		double ans = std::abs(minuteAngle[minutes-1]-hourAngle[hour-1]-hourOffset);
		return ans>180?360-ans:ans;
    }
};

int main() {
	std::cout << Solution().angleClock(3, 30) << std::endl;
}