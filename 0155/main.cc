#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class MinStack {
private:
    vector<int>* vals;
public:
    MinStack() {
        vals = new vector<int>;
    }

    void push(int val) {
        vals->push_back(val);
    }

    void pop() {
        vals->pop_back();
    }

    int top() {
        return (*vals)[vals->size() - 1];
    }

    int getMin() {
        return *min_element((*vals).begin(), (*vals).end());
    }

    ~MinStack() {
        delete vals;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
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
