#include <iostream>
#include <queue>
using namespace std;
// Function to find the sum of minimum and maximum elements in all subarrays of size k

class node
{
public:
	int data;
	node *left;
	node *right;

	node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

node *buildTree(node *&root)
{
	int data;
	cout << "Enter data: ";
	cin >> data;
	if (data == -1)
	{
		return NULL;
	}
	root = new node(data);
	cout << "Enter left child of " << data << ": ";
	root->left = buildTree(root->left);
	cout << "Enter right child of " << data << ": ";
	root->right = buildTree(root->right);
	return root;
}

void InorderTraversal(node *&root)
{
	if (root == NULL)
	{
		return;
	}
	InorderTraversal(root->left);
	cout << root->data << " ";
	InorderTraversal(root->right);
}

void PreorderTraversal(node *root)
{
	if (root == NULL)
	{
		return;
	}

	cout << root->data << " ";
	PreorderTraversal(root->left);
	PreorderTraversal(root->right);
}

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

void PostOrderTraversal(node *&root)
{
	if (root == NULL)
	{
		return;
	}

	PostOrderTraversal(root->left);
	PostOrderTraversal(root->right);
	cout << root->data << " ";
}

void LevelOrderTraversal(node *&root)
{
	if (root == NULL)
	{
		return;
	}
	queue<node *> q;
	q.push(root);
	q.push(NULL);
	while (!q.empty())
	{
		node *temp = q.front();
		q.pop();
		if (temp == NULL)
		{
			cout << endl;
			if (!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			cout << temp->data << " ";
			if (temp->left)
			{
				q.push(temp->left);
			}
			if (temp->right)
			{
				q.push(temp->right);
			}
		}
	}
}

int main()
{
	node *root = NULL;
	buildLevelOrder(root);
	LevelOrderTraversal(root);
	return 0;
}