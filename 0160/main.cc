#include<iostream>
#include<unordered_map>
#include<vector>

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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
    {
        // 筛选出遍历两个链表中遍历次数==2的节点即可
        // 根据指针的性质 直接返回头指针即可 无需建立新链表

        // 存储节点的遍历次数 节点的指针是辨别是否为同一节点的唯一依据
        unordered_map<ListNode*, int> node_freq;

        // 遍历A链表
        ListNode* headA_copy = headA;
        while (headA != nullptr)
        {
            node_freq[headA] = 0;
            headA = headA->next;
        }
        headA = headA_copy;
        while (headA != nullptr)
        {
            node_freq[headA]++;
            headA = headA->next;
        }

        // 遍历B链表
        ListNode* headB_copy = headB;
        while (headB != nullptr)
        {
            if (node_freq[headB] != 1)
            {
                node_freq[headB] = 0;
            }
            headB = headB->next;
        }
        headB = headB_copy;
        while (headB != nullptr)
        {
            node_freq[headB]++;
            headB = headB->next;
        }
        headB = headB_copy;
        while (headB != nullptr)
        {
            if (node_freq[headB] == 2)
            {
                return headB;
            }
            headB = headB->next;
        }

        return nullptr;
    }
};

int main()
{
	ListNode* headA = new ListNode(4);
	headA->next = new ListNode(1);
	headA->next->next = new ListNode(8);
	headA->next->next->next = new ListNode(4);
	headA->next->next->next->next = new ListNode(5);
	ListNode* headB = new ListNode(5);
	headB->next = new ListNode(0);
	headB->next->next = new ListNode(1);
	headB->next->next->next = headA->next->next;
	Solution sol;
	cout << sol.getIntersectionNode(headA, headB)->val << endl;
	return 0;
}
