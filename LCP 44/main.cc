#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    unordered_set<int> val_set;

    void traverse(TreeNode* root) {
        if (root != nullptr) {
            val_set.insert(root->val);
            traverse(root->left);
            traverse(root->right);
        }
    }

public:
    int numColor(TreeNode* root) {
        traverse(root);
        return val_set.size();
    }
};

int main() {
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(2);
	root->left->right = new TreeNode(2);
	root->right->left = new TreeNode(3);
	root->right->right = new TreeNode(3);
	Solution solution;
	cout << solution.numColor(root) << endl;
	return 0;
}
