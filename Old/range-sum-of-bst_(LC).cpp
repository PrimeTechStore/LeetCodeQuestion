#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int slove(TreeNode *root, int low, int high)
{
    if (root == nullptr)
        return 0;

    int leftval = slove(root->left, low, high);
    int rightval = slove(root->right, low, high);

    if (high >= root->val && root->val >= low)
        return root->val + leftval + rightval;

    return leftval + rightval;
}