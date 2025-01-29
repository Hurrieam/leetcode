#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr) return head;

        vector<int> node_vec;
        while (head != nullptr) {
            node_vec.push_back(head->val);
            head = head->next;
        }

        if (node_vec.size() == 1) return new ListNode(node_vec[0]);

        if (node_vec.size() % 2 == 0) {
            for (int i = 0; i < node_vec.size(); i += 2) {
                swap(node_vec[i], node_vec[i + 1]);
            }
        }
        else {
            for (int i = 0; i < node_vec.size() - 1; i += 2) {
                swap(node_vec[i], node_vec[i + 1]);
            }
        }

        ListNode* new_head, ** node_ptr = &new_head;
        for (int i = 0; i < node_vec.size(); i++) {
            *node_ptr = new ListNode(node_vec[i]);
            node_ptr = &((*node_ptr)->next);
        }

        return new_head;
    }
};

int main() {
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	Solution sol;
	ListNode* new_head = sol.swapPairs(head);
	while (new_head != nullptr) {
		cout << new_head->val << " ";
		new_head = new_head->next;
	}
	return 0;
}
