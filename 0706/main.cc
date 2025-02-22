#include<iostream>
#include<vector>

using namespace std;

class MyHashMap {
private:
    vector<int>* keys;
    vector<int>* values;
public:
    /** Initialize your data structure here. */
    MyHashMap() {
        this->keys = new vector<int>;
        this->values = new vector<int>;
    }

    /** value will always be non-negative. */
    void put(int key, int value) {
        for (int i = 0; i < keys->size(); i++) {
            if ((*keys)[i] == key) {
                (*values)[i] = value;
                return;
            }
        }
        keys->push_back(key);
        values->push_back(value);
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        for (int i = 0; i < keys->size(); i++) {
            if ((*keys)[i] == key) {
                return (*values)[i];
            }
        }
        return -1;
    }

    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        for (int i = 0; i < keys->size(); i++) {
            if ((*keys)[i] == key) {
                keys->erase(keys->begin() + i);
                values->erase(values->begin() + i);
                break;
            }
        }
    }

    ~MyHashMap() {
        delete this->keys;
        delete this->values;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

int main() {
	MyHashMap* obj = new MyHashMap();
	obj->put(1, 1);
	obj->put(2, 2);
	cout << obj->get(1) << endl;
	cout << obj->get(3) << endl;
	obj->put(2, 1);
	cout << obj->get(2) << endl;
	obj->remove(2);
	cout << obj->get(2) << endl;
	return 0;
}
