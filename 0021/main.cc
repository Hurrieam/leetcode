#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        vector<int> list;

        // 遍历链表1
        while (list1 != nullptr)
        {
            list.push_back(list1->val);
            list1 = list1->next;
        }

        // 遍历链表2
        while (list2 != nullptr)
        {
            list.push_back(list2->val);
            list2 = list2->next;
        }

        // 排序
        sort(list.begin(), list.end());

        // 生成新链表
        ListNode* head, ** node_ptr = &head;
        for (auto elem : list)
        {
            *node_ptr = new ListNode(elem);
            node_ptr = &((*node_ptr)->next);
        }

        return head;
    }
};

int main()
{
	ListNode* list1 = new ListNode(1);
	list1->next = new ListNode(2);
	list1->next->next = new ListNode(4);
	ListNode* list2 = new ListNode(1);
	list2->next = new ListNode(3);
	list2->next->next = new ListNode(4);
	Solution solution;
	ListNode* result = solution.mergeTwoLists(list1, list2);
	while (result != nullptr)
	{
		cout << result->val << " ";
		result = result->next;
	}
	return 0;
}
