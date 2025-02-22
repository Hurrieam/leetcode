#include<iostream>
#include<vector>
#include<algorithm>

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr) return head;

        vector<int> node_vec;
        while (head != nullptr) {
            node_vec.push_back(head->val);
            head = head->next;
        }

        reverse(node_vec.begin() + left - 1, node_vec.begin() + right);

        ListNode* new_head, ** node_ptr = &new_head;
        for (int idx = 0; idx < node_vec.size(); idx++) {
            *node_ptr = new ListNode(node_vec[idx]);
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
	head->next->next->next->next = new ListNode(5);
	int left = 2, right = 4;
	Solution sol;
	ListNode* new_head = sol.reverseBetween(head, left, right);
	while (new_head != nullptr) {
		cout << new_head->val << " ";
		new_head = new_head->next;
	}
	cout << endl;
	return 0;
}
