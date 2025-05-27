// Tree node
struct Node
{
    int data;
    Node* left, * right;
}; 

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
    pair<bool,int> sumtree(Node* root){
        if(root == NULL){
            return{true,0};
        }else if(root->left == NULL && root->right == NULL){
            return{true,root->data};
        }
        
        auto left = sumtree(root->left);
        auto right = sumtree(root->right);
        
        bool lans = left.first;
        bool rans = right.first;
        
        bool cond = root->data == left.second + right.second;
        
        pair<bool,int> ans;
        
        if(lans & rans & cond){
            ans.first = true;
            ans.second = 2*root->data;
        }else{
            ans.first = false;
            ans.second = 0;
        }
        
        return ans;
    }
  
    bool isSumTree(Node* root) {
        return sumtree(root).first;
        
    }
};