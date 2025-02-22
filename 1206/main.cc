#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Skiplist {
private:
    vector<int> data;
public:
    Skiplist() {

    }

    bool search(int target) {
        return find(data.begin(), data.end(), target) != data.end();
    }

    void add(int num) {
        data.push_back(num);
    }

    bool erase(int num) {
        auto iter = find(data.begin(), data.end(), num);
        if (iter == data.end()) {
            return false;
        }
        data.erase(iter);
        return true;
    }
};

/**
 * Your Skiplist object will be instantiated and called as such:
 * Skiplist* obj = new Skiplist();
 * bool param_1 = obj->search(target);
 * obj->add(num);
 * bool param_3 = obj->erase(num);
 */

int main() {
	Skiplist* obj = new Skiplist();
	cout << obj->search(1) << endl;
	obj->add(1);
	obj->add(2);
	obj->add(3);
	cout << obj->search(1) << endl;
	cout << obj->search(2) << endl;
	cout << obj->search(3) << endl;
	cout << obj->erase(2) << endl;
	cout << obj->search(2) << endl;
	return 0;
}
