#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class MinStack {
private:
    vector<int> val;
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
        val.push_back(x);
    }

    void pop() {
        val.pop_back();
    }

    int top() {
        return val[val.size() - 1];
    }

    int getMin() {
        int min = val[0];
        for (int i = 0; i < val.size(); i++) {
            if (val[i] < min) {
                min = val[i];
            }
        }

        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main() {
	MinStack* obj = new MinStack();
	obj->push(-2);
	obj->push(0);
	obj->push(-3);
	cout << obj->getMin() << endl;
	obj->pop();
	cout << obj->top() << endl;
	cout << obj->getMin() << endl;
	return 0;
}
