#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Definition for a binary tree node.
class Node{
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
}

void buildfromLevelOrder(Node* &root) {
	queue<Node*> q;
	int data;
	cout << "Enter root data: ";
	cin >> data;
	root = new Node(data);
	q.push(root);

	while (!q.empty()) {
		Node* temp = q.front();
		q.pop();

		cout << "Enter left child of " << temp->data << ": ";
		cin >> data;
		if (data != -1) {
			temp->left = new Node(data);
			q.push(temp->left);
		}

		cout << "Enter right child of " << temp->data << ": ";
		cin >> data;
		if (data != -1) {
			temp->right = new Node(data);
			q.push(temp->right);
		}
	}
}

// Tree Node
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
    void traverseLeft(Node* root, vector<int> &ans){
        if((root == NULL) || (root->left == NULL && root->right == NULL)){
            return;
        }
        ans.push_back(root->data);
        
        if(root->left) traverseLeft(root->left,ans);
        else traverseLeft(root->right,ans);
    }
    
    void traverseLeaf(Node* root, vector<int> &ans){
        if((root == NULL)){
            return;
        }
        
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
            return;
        }
        
        traverseLeaf(root->left,ans);
        traverseLeaf(root->right,ans);
    }
    
    void traverseRight(Node* root, vector<int> &ans){
        if((root == NULL) || (root->left == NULL && root->right == NULL)){
            return;
        }
        
        if(root->right) traverseRight(root->right,ans);
        else traverseRight(root->left,ans);
        
        ans.push_back(root->data);
    }
    
  public:
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        
        if(root == NULL){
            return ans;
        }
        ans.push_back(root->data);
        
        //for left subtree
        traverseLeft(root->left, ans);
        
        //for leaf nodes
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
        
        //for right subtree
        traverseRight(root->right, ans);
        
        return ans;
    }
};

int main() {
	Node* root = NULL;
	buildfromLevelOrder(root);
	
	Solution solution;
	vector<int> boundary = solution.boundaryTraversal(root);
	
	cout << "Boundary Traversal: ";
	for (int val : boundary) {
		cout << val << " ";
	}
	cout << endl;

	return 0;
}