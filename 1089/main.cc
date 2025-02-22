#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int len = arr.size();
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                arr.insert(arr.begin() + i, 0);
                i++;
            }
        }
        arr.resize(len);
    }
};

int main() {
	Solution* obj = new Solution();
	vector<int> arr = { 1, 0, 2, 3, 0, 4, 5, 0 };
	obj->duplicateZeros(arr);
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	arr = { 1, 2, 3 };
	obj->duplicateZeros(arr);
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	arr = { 0, 0, 0, 0, 0, 0, 0 };
	obj->duplicateZeros(arr);
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
