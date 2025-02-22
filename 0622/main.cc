#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class MyCircularQueue {
private:
    vector<int> data = {};
    int capacity = 0;
public:
    MyCircularQueue(int k) {
        capacity = k;
    }

    bool enQueue(int value) {
        if (capacity > data.size()) {
            data.push_back(value);
            return true;
        }

        return false;
    }

    bool deQueue() {
        if (!data.empty()) {
            data.erase(std::find(data.begin(), data.end(), data[0]));
            return true;
        }

        return false;
    }

    int Front() {
        if (!data.empty()) {
            return data[0];
        }

        return -1;
    }

    int Rear() {
        if (!data.empty()) {
            return data[data.size() - 1];
        }

        return -1;
    }

    bool isEmpty() {
        return data.empty();
    }

    bool isFull() {
        return data.size() == capacity;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */

int main() {
	MyCircularQueue* obj = new MyCircularQueue(3);
	cout << obj->enQueue(1) << endl;
	cout << obj->enQueue(2) << endl;
	cout << obj->enQueue(3) << endl;
	cout << obj->enQueue(4) << endl;
	cout << obj->Rear() << endl;
	cout << obj->isFull() << endl;
	cout << obj->deQueue() << endl;
	cout << obj->enQueue(4) << endl;
	cout << obj->Rear() << endl;
	return 0;
}
