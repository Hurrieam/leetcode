#include<iostream>
#include<vector>
#include<unordered_map>
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
private:
    void removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> nums_freq;
        for (auto num : nums) {
            nums_freq[num]++;
        }
        for (auto pair : nums_freq) {
            if (pair.second > 1) {
                for (int step = 1; step <= pair.second - 1; step++) {
                    nums.erase(find(nums.begin(), nums.end(), pair.first));
                }
            }
        }
    }

    vector<int> nums;

public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return head;
        while (head != nullptr) {
            nums.push_back(head->val);
            head = head->next;
        }

        removeDuplicates(nums);

        ListNode* new_head, ** node_ptr = &new_head;
        for (auto num : nums) {
            *node_ptr = new ListNode(num);
            node_ptr = &((*node_ptr)->next);
        }
        return new_head;
    }
};

int main() {
	Solution solution;
	ListNode* head = new ListNode(1, new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(3)))));
	ListNode* new_head = solution.deleteDuplicates(head);
	while (new_head != nullptr) {
		cout << new_head->val << " ";
		new_head = new_head->next;
	}
	cout << endl;
	return 0;
}
