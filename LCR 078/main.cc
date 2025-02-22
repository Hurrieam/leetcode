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
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> nums;
        for (auto linked_list : lists) {
            while (linked_list != nullptr) {
                nums.push_back(linked_list->val);
                linked_list = linked_list->next;
            }
        }
        sort(nums.begin(), nums.end());

        ListNode* head;
        ListNode** node_ptr = &head;
        for (auto elem : nums) {
            *node_ptr = new ListNode(elem);
            node_ptr = &((*node_ptr)->next);
        }

        return head;
    }
};

int main() {
	ListNode* head1 = new ListNode(1);
	head1->next = new ListNode(4);
	head1->next->next = new ListNode(5);
	ListNode* head2 = new ListNode(1);
	head2->next = new ListNode(3);
	head2->next->next = new ListNode(4);
	ListNode* head3 = new ListNode(2);
	head3->next = new ListNode(6);
	vector<ListNode*> lists;
	lists.push_back(head1);
	lists.push_back(head2);
	lists.push_back(head3);
	Solution solution;
	ListNode* new_head = solution.mergeKLists(lists);
	while (new_head != nullptr) {
		cout << new_head->val << " ";
		new_head = new_head->next;
	}
	return 0;
}
