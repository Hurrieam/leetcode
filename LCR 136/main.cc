#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>

using namespace std;

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
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode** ptr = &head;

        if (head->val == val) {
            return head->next;
        }

        while ((*ptr)->next != nullptr) {
            if ((*ptr)->next->val == val) {
                (*ptr)->next = (*ptr)->next->next;
                break;
            }
            else {
                ptr = &((*ptr)->next);
            }
        }

        return head;
    }
};

int main() {
	ListNode* head = new ListNode(4);
	head->next = new ListNode(5);
	head->next->next = new ListNode(1);
	head->next->next->next = new ListNode(9);
	int val = 5;
	Solution solution;
	ListNode* new_head = solution.deleteNode(head, val);
	while (new_head != nullptr) {
		cout << new_head->val << " ";
		new_head = new_head->next;
	}
	return 0;
}
