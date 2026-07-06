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
    unordered_map<int,int> mp;
    TreeNode* solve(int s, int e, int&idx, vector<int> &preorder){
        if(s>e) return nullptr;
        int i = mp[preorder[idx]];
        TreeNode* root = new TreeNode(preorder[idx]);
        idx++;
        root->left = solve(s, i-1, idx, preorder);
        root->right = solve(i+1, e, idx, preorder);
        return root;

    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        for(int i=0;i<n;i++){
            mp[inorder[i]]= i;
        }
        int idx = 0;
        return solve(0, n-1,idx, preorder);
    }
};