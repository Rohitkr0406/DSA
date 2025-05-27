//A binary tree node structure

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
 

class Solution {
    private: 
 pair<bool, int> balanced(Node* root) {
    	if (root == nullptr) {
    		return {true, 0}; // {diameter, height}
    	}
    
    	pair<bool,int> left = balanced(root->left);
    	pair<bool,int> right = balanced(root->right);
    	
    	bool l = left.first;
    	bool r = right.first;
    	bool diff = abs(left.second - right.second) <= 1;
    	
    	pair<bool,int> ans;
    	ans.second = max(left.second,right.second)+1;
    	
    	if(l & r & diff){
    	    ans.first = true;
    	}else{
    	    ans.first = false;
    	}
    	
    	return ans;
    }
    
  public:
    bool isBalanced(Node* root) {
        
        return balanced(root).first;
        
    }
};