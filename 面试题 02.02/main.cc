#include<iostream>
#include<vector>
#include<unordered_set>
#include<cmath>

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
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int kthToLast(ListNode* head, int k) {
        vector<int> node_vec;
        while (head != nullptr) {
            node_vec.push_back(head->val);
            head = head->next;
        }

        return node_vec[node_vec.size() - k];
    }
};

int main() {
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	int k;
	cin >> k;
	Solution solution;
	cout << solution.kthToLast(head, k) << endl;
	return 0;
}
