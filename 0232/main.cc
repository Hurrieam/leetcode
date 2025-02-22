#include<iostream>
#include<vector>

using namespace std;

class MyQueue {
private:
    vector<int> v;
public:
    MyQueue() {

    }

    void push(int x) {
        v.push_back(x);
    }

    int pop() {
        int popped_elem = v[0];
        v.erase(v.begin());
        return popped_elem;
    }

    int peek() {
        return v[0];
    }

    bool empty() {
        return v.size() == 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main() {
	MyQueue* obj = new MyQueue();
	obj->push(1);
	obj->push(2);
	cout << obj->peek() << endl;
	cout << obj->pop() << endl;
	cout << obj->empty() << endl;
	return 0;
}
