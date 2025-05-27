//A binary tree node


class Node
{
    int data;
    struct Node* left;
    struct Node* right;
  public:
    Node(int x){
        data = x;
        left = right = NULL;
    }
};


class Solution {
  public:
    // Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2) {
        // Your Code here
        if(r1 == NULL && r2 == NULL){
            return true;
        }
        else if(r1 == NULL && r2 != NULL){
            return false;
        }
        else if(r1 != NULL && r2 == NULL){
            return false;
        }
        
        bool left = isIdentical(r1->left,r2->left);
        bool right = isIdentical(r1->right,r2->right);
        
        bool value = r1->data == r2->data;
        
        if(left && right & value){
            return true;
        }else{
            return false;
        }
    }
};