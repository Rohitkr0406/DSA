#include <iostream>
#include <vector>
#include <queue>
using namespace std;


// Definition for a binary tree node.
class Node {
public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = NULL;
		right = NULL;
	}
};


void buildLevelOrder(node *&root)
{
	queue<node *> q;
	cout << "Enter data for root:";
	int data;
	cin >> data;
	root = new node(data);
	q.push(root);

	while (!q.empty())
	{
		node *temp = q.front();
		q.pop();

		int leftdata;
		cout << "Enter left data for " << temp->data << ": ";
		cin >> leftdata;
		if (leftdata != -1)
		{
			temp->left = new node(leftdata);
			q.push(temp->left);
		}

		int rightdata;
		cout << "Enter right data for " << temp->data << ": ";
		cin >> rightdata;
		if (rightdata != -1)
		{
			temp->right = new node(rightdata);
			q.push(temp->right);
		}
	}
}


class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> result;
    	if(root == NULL)
    	    return result;
    	
    	queue<Node*> q;										
    	q.push(root);
    	
    	bool leftToRight = true;
    	
    	while(!q.empty()) {
    	    
    	    int size = q.size();
    	    vector<int> ans(size);
    	    
    	    //Level Process
    	    for(int i=0; i<size; i++) {
    	        
    	        Node* frontNode = q.front();
    	        q.pop();
    	        
    	        //normal insert or reverse insert 
    	        int index = leftToRight ? i : size - i - 1;
    	        ans[index] = frontNode -> data;
    	        
    	        if(frontNode->left)
    	            q.push(frontNode -> left);
    	            
    	        if(frontNode->right)
    	            q.push(frontNode -> right);
    	    }
    	    
    	    //direction change karni h
    	    leftToRight = !leftToRight;
    	   
    	  for(auto i: ans) {
    	      result.push_back(i);
    	  }  
    	}
    	    return result;
    }
};

int main() {
	Node* root = NULL;
	buildLevelOrder(root);
	
	Solution sol;
	vector<int> result = sol.zigZagTraversal(root);
	for (int val : result) {
		cout << val << " ";
	}
	cout << endl;
	return 0;
}
