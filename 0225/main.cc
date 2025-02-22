#include<iostream>
#include<stack>

using namespace std;

class MyStack {
private:
    stack<int> s;
public:
    MyStack() {

    }

    void push(int x) {
        s.push(x);
    }

    int pop() {
        int popped_val = s.top();
        s.pop();
        return popped_val;
    }

    int top() {
        return s.top();
    }

    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main() {
	MyStack* obj = new MyStack();
	obj->push(1);
	obj->push(2);
	cout << obj->top() << endl;
	cout << obj->pop() << endl;
	cout << obj->empty() << endl;
	return 0;
}
