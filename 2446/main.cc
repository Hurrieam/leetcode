#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        bool minutes_status[1440] = { false };

        int* event1_starting_time = parse_time(event1[0]);
        int* event1_ending_time = parse_time(event1[1]);
        int* event2_starting_time = parse_time(event2[0]);
        int* event2_ending_time = parse_time(event2[1]);

        int event1_starting_minute = event1_starting_time[0] * 60 + event1_starting_time[1];
        int event1_ending_minute = event1_ending_time[0] * 60 + event1_ending_time[1];
        int event2_starting_minute = event2_starting_time[0] * 60 + event2_starting_time[1];
        int event2_ending_minute = event2_ending_time[0] * 60 + event2_ending_time[1];

        for (int i = event1_starting_minute; i <= event1_ending_minute; i++) {
            minutes_status[i] = true;
        }
        for (int i = event2_starting_minute; i <= event2_ending_minute; i++) {
            if (minutes_status[i]) {
                delete[] event1_starting_time;
                delete[] event1_ending_time;
                delete[] event2_starting_time;
                delete[] event2_ending_time;
                return true;
            }
        }

        delete[] event1_starting_time;
        delete[] event1_ending_time;
        delete[] event2_starting_time;
        delete[] event2_ending_time;
        return false;
    }

private:
    int* parse_time(string time) {
        int* parsed_time = new int[2];
        parsed_time[0] = atoi(time.substr(0, 2).c_str());
        parsed_time[1] = atoi(time.substr(3, 2).c_str());
        return parsed_time;
    }
};

int main() {
	Solution sol;
	vector<string> event1 = { "10:00", "12:00" };
	vector<string> event2 = { "11:00", "13:00" };
	cout << sol.haveConflict(event1, event2) << endl;
	return 0;
}
