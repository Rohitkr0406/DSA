#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Node
{
public:
	int data;
	Node *left;
	Node *right;

	Node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

int height(Node *root)
{
	// code here
	if (root == NULL)
	{
		return -1;
	}

	int l = height(root->left);
	int r = height(root->right);

	int ans = max(l, r) + 1;

	return ans;
}


void buildLevelOrder(Node *&root)
{
	queue<Node *> q;
	cout << "Enter data for root:";
	int data;
	cin >> data;
	root = new Node(data);
	q.push(root);

	while (!q.empty())
	{
		Node *temp = q.front();
		q.pop();

		int leftdata;
		cout << "Enter left data for " << temp->data << ": ";
		cin >> leftdata;
		if (leftdata != -1)
		{
			temp->left = new Node(leftdata);
			q.push(temp->left);
		}

		int rightdata;
		cout << "Enter right data for " << temp->data << ": ";
		cin >> rightdata;
		if (rightdata != -1)
		{
			temp->right = new Node(rightdata);
			q.push(temp->right);
		}
	}
}

int main(){
	Node *root = NULL;
	buildLevelOrder(root);
	cout << "Height of the tree is: " << height(root) << endl;
	return 0;
}