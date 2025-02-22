#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {};
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
    ListNode* middleNode(ListNode* head) {
        // 遍历节点
        vector<ListNode*> list_traverse_vec;
        while (head != nullptr) {
            list_traverse_vec.push_back(head);
            head = head->next;
        }

        return list_traverse_vec[list_traverse_vec.size() / 2];
    }
};

int main() {
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	Solution* obj = new Solution();
	ListNode* result = obj->middleNode(head);
	if (result != nullptr) {
		cout << result->val << endl;
	}
	else {
		cout << "null" << endl;
	}
	return 0;
}
