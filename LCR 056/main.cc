#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {};
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    vector<int> traverse_vec;
    void traverse(TreeNode* root) {
        if (root != nullptr) {
            traverse_vec.push_back(root->val);
            traverse(root->left);
            traverse(root->right);
        }
    }
public:
    bool findTarget(TreeNode* root, int k) {
        traverse(root);
        if (traverse_vec.size() < 2) return false;
        for (int i = 0; i <= traverse_vec.size() - 2; i++) {
            for (int j = i + 1; j <= traverse_vec.size() - 1; j++) {
                if (traverse_vec[i] + traverse_vec[j] == k) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
	TreeNode* root = new TreeNode(5);
	root->left = new TreeNode(3);
	root->right = new TreeNode(6);
	root->left->left = new TreeNode(2);
	root->left->right = new TreeNode(4);
	root->right->right = new TreeNode(7);
	Solution solution;
	cout << solution.findTarget(root, 9) << endl;
	cout << solution.findTarget(root, 28) << endl;
	cout << solution.findTarget(root, 10) << endl;
	cout << solution.findTarget(root, 8) << endl;
	return 0;
}
