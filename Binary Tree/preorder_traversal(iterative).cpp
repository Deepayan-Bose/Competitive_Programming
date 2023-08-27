class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        vector<int> ans;
        stack<TreeNode*> s;
        TreeNode* curr=root;
        s.push(curr);

        while(!(s.empty())){
            ans.push_back((s.top())->val);
            curr=s.top();
            s.pop();
            if(curr->right!=NULL){
                s.push(curr->right);
            }
            if(curr->left!=NULL){
                s.push(curr->left);
            }
        }
        return ans;
    }
};
