#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return head;

        vector<int> node_vec;
        while (head != nullptr) {
            node_vec.push_back(head->val);
            head = head->next;
        }

        reverse(node_vec.begin(), node_vec.end());

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
	Solution solution;
	ListNode* new_head = solution.reverseList(head);
	while (new_head != nullptr) {
		cout << new_head->val << " ";
		new_head = new_head->next;
	}
	return 0;
}
