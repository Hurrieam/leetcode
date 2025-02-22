#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int n = distance.size();
        // 顺时针
        int distance_A = 0;
        for (int idx = start; idx != destination; idx = (idx + 1) % n) {
            distance_A += distance[idx];
        }

        // 逆时针 即终点到起点顺时针
        int distance_B = 0;
        for (int idx = destination; idx != start; idx = (idx + 1) % n) {
            distance_B += distance[idx];
        }

        return min(distance_A, distance_B);
    }
};

int main() {
	Solution* obj = new Solution();
	vector<int> distance = { 1, 2, 3, 4 };
	cout << obj->distanceBetweenBusStops(distance, 0, 1) << endl;
	cout << obj->distanceBetweenBusStops(distance, 0, 2) << endl;
	cout << obj->distanceBetweenBusStops(distance, 0, 3) << endl;
	return 0;
}
