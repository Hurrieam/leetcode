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
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {};
};

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        brr(root);
        return this->result;
    }

private:
    vector<int> result;

    void brr(TreeNode* root) {
        if (root != nullptr) {
            brr(root->left);
            brr(root->right);
            this->result.push_back(root->val);
        }
    }
};

int main() {
	TreeNode* root = new TreeNode(1);
	root->right = new TreeNode(2);
	root->right->left = new TreeNode(3);
	Solution sol;
	vector<int> result = sol.postorderTraversal(root);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	cout << endl;
	return 0;
}
