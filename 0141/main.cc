#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr) {
            return false;
        }
        unordered_map<ListNode*, bool> my_map;
        // 以节点的指针为判断是否为同一节点的唯一依据
        // false未遍历过 true遍历过
        // map用于标记当前节点是否遍历过
        // 若遍历到了之前遍历过的节点则有环
        while (head->next != nullptr) {
            if (my_map[head] == true) {
                return true;
            }
            my_map[head] = true;
            head = head->next;
        }
        return false;
    }
};

int main() {
	ListNode* head = new ListNode(3);
	head->next = new ListNode(2);
	head->next->next = new ListNode(0);
	head->next->next->next = new ListNode(-4);
	head->next->next->next->next = head->next;
	Solution sol;
	cout << sol.hasCycle(head) << endl;
	return 0;
}
