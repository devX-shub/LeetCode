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
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> ans; 
        if(!root)
            return ans;
        stack<TreeNode*> st;
        stack<TreeNode*> st2;
        TreeNode* curr;
        st.push(root);
        while(!st.empty())
        {
            curr = st.top();
            st.pop();
            st2.push(curr);
            if(curr->left)
                st.push(curr->left);
            if(curr->right)
                st.push(curr->right);
        }
        while(!st2.empty())
        {
            curr = st2.top();
            st2.pop();
            ans.push_back(curr->val);
        }
        return ans;
    }
};