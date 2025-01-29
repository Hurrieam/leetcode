#include <iostream>
#include <vector>
#include <algorithm>

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
	Solution solution;
	vector<ListNode*> lists;
	ListNode* list1 = new ListNode(1, new ListNode(4, new ListNode(5)));
	ListNode* list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
	ListNode* list3 = new ListNode(2, new ListNode(6));
	lists.push_back(list1);
	lists.push_back(list2);
	lists.push_back(list3);
	ListNode* result = solution.mergeKLists(lists);
	while (result != nullptr) {
		cout << result->val << " ";
		result = result->next;
	}
	cout << endl;
	return 0;
}
