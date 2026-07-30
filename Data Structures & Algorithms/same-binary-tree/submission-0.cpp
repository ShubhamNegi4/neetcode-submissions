#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
const long long inflong = 0x3f3f3f3f3f3f3f;
const int inf = 0x3f3f3f3f;

static const int _ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

/*
 
 
*/


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
public:
    bool f(TreeNode* p, TreeNode* q) {
        if(p == nullptr and q == nullptr)return 1;
        if(p != nullptr and q != nullptr and p->val != q->val)return 0;
        if(p == nullptr and q != nullptr)return 0;
        if(p != nullptr and q == nullptr)return 0;
        int left = f(p->left, q->left);
        int right = f(p->right, q->right);
        return left && right;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr and q == nullptr)return 1;
        return f(p, q);
    }
};
