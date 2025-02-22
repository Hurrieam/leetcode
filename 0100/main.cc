#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        brr(p, p_vec);
        brr(q, q_vec);

        return p_vec == q_vec;
    }

private:
    // 中序遍历两颗二叉树 若结果相同则为同一棵二叉树
    vector<int> p_vec, q_vec;

    void brr(TreeNode* tree, vector<int>& result) {
        if (tree != nullptr) {
            brr(tree->left, result);
            result.push_back(tree->val);
            brr(tree->right, result);
        }
        // 结点为空的情况
        result.push_back(-1);
    }
};

int main() {
	TreeNode* p = new TreeNode(1);
	p->left = new TreeNode(2);
	p->right = new TreeNode(3);
	TreeNode* q = new TreeNode(1);
	q->left = new TreeNode(2);
	q->right = new TreeNode(3);
	Solution sol;
	cout << sol.isSameTree(p, q) << endl;
	return 0;
}
