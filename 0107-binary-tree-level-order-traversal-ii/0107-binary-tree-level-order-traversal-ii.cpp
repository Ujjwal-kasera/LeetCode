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
    // vector<vector<int>> levelOrderBottom(TreeNode* root) {
    //     vector<vector<int>> res;
    //     if(root==NULL)
    //         return res;
    //     queue<TreeNode*> q;
    //     q.push(root);
    //     int len;
    //     TreeNode* curr;
    //     vector<int> temp;
    //     while(!q.empty()){
    //         len=q.size();
    //         temp={};
    //         while(len--){
    //             curr=q.front();
    //             q.pop();
    //             if(curr->left)
    //                 q.push(curr->left);
    //             if(curr->right)
    //                 q.push(curr->right);
    //             temp.push_back(curr->val);
    //         }
    //         res.insert(res.begin(),temp);
    //     }
    //     return res;
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        int len;
        TreeNode* curr;
        vector<int> temp;
        while(!q.empty()){
            len=q.size();
            temp={};
            while(len--){
                curr=q.front();
                q.pop();
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                temp.push_back(curr->val);
            }
            res.push_back(temp);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};