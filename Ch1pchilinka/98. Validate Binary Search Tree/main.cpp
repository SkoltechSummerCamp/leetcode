#include <iostream>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
  TreeNode *mostLeftNode(TreeNode *root) {
    TreeNode *now = root;
    if (root == nullptr) {
      return nullptr;
    }
    while (now->left != nullptr) {
      now = now->left;
    }
    return now;
  }
  TreeNode *mostRightNode(TreeNode *root) {
    TreeNode *now = root;
    if (root == nullptr) {
      return nullptr;
    }
    while (now->right != nullptr) {
      now = now->right;
    }
    return now;
  }
  bool isValidBST(TreeNode *root) {
    bool isValid = true;
    if (root == nullptr) {
      return true;
    }
    if (root->left != nullptr) {
      if (root->left->val >= root->val) {
        isValid = false;
      } else if (mostRightNode(root->left) != nullptr && mostRightNode(root->left)->val >= root->val) {
        isValid = false;
      }
    }
    if (root->right != nullptr) {
      if (root->right->val <= root->val) {
        isValid = false;
      } else if (mostLeftNode(root->right) != nullptr && mostLeftNode(root->right)->val <= root->val) {
        isValid = false;
      }
    }
    return (isValid && isValidBST(root->left) && isValidBST(root->right));
  }
};