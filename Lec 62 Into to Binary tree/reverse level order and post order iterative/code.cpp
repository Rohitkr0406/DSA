#include<iostream>
#include<queue>
#include<stack>

using namespace std;

// Binary tree node
class node{
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

// Function to print reverse level order traversal
void reverseLevelOrder(node* &root){
	if (root == NULL){
		return;
	}

	queue<node*> q;
	stack<node*> s;
	
	q.push(root);
	q.push(NULL);

	while (!q.empty()){
		node* temp = q.front();
		q.pop();

		if (temp == NULL){
			if (q.empty()){
				break;
			}
			q.push(NULL);
			s.push(NULL);
			continue;
		}

		s.push(temp);
		if (temp->right){
			q.push(temp->right);
		}
		if (temp->left){
			q.push(temp->left);
		}
	}

	while (!s.empty()){
		node* temp = s.top();
		s.pop();
		if (temp == NULL){
			cout << endl;
			continue;
		}
		cout << temp->data << " ";
	}
	
}

void postOrderIterative(node* &root) {
	if (root == NULL) {
		return;
	}

	stack<node*> s1, s2;
	s1.push(root);
	while (!s1.empty()) {
		node* temp = s1.top();
		s1.pop();
		s2.push(temp);

		if (temp->left) {
			s1.push(temp->left);
		}
		if (temp->right) {
			s1.push(temp->right);
		}
	}

	while(!s2.empty()){
		node* temp = s2.top();
		s2.pop();
		cout << temp->data << " ";
	}
}

int main()
{
	node *root = NULL;
	buildLevelOrder(root);
	cout << "Reverse Level Order Traversal: ";
	postOrderIterative(root);
	cout << endl;
	return 0;
}