#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class RandomizedSet {
private:
    vector<int> vals;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {

    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if (find(vals.begin(), vals.end(), val) == vals.end()) {
            vals.push_back(val);
            return true;
        }
        return false;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if (find(vals.begin(), vals.end(), val) != vals.end()) {
            vals.erase(find(vals.begin(), vals.end(), val));
            return true;
        }
        return false;
    }

    /** Get a random element from the set. */
    int getRandom() {
        // srand((unsigned)time(NULL));
        return vals[rand() % vals.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

int main() {
	RandomizedSet* obj = new RandomizedSet();
	cout << obj->insert(1) << endl;
	cout << obj->remove(2) << endl;
	cout << obj->insert(2) << endl;
	cout << obj->getRandom() << endl;
	cout << obj->remove(1) << endl;
	cout << obj->insert(2) << endl;
	cout << obj->getRandom() << endl;
	return 0;
}
