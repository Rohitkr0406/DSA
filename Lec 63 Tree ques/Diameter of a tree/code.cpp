#include<iostream>
using namespace std;

class Node {
	int data;
	Node* left;
	Node* right;

public:
	Node(int value) : data(value), left(nullptr), right(nullptr) {}

	int getData() const {
		return data;
	}

	Node* getLeft() const {
		return left;
	}

	Node* getRight() const {
		return right;
	}

	void setLeft(Node* node) {
		left = node;
	}

	void setRight(Node* node) {
		right = node;
	}
};


pair<int, int> diameter(Node* root) {
	if (root == nullptr) {
		return {0, 0}; // {diameter, height}
	}

	auto left = diameter(root->getLeft());
	auto right = diameter(root->getRight());

	int height = max(left.second, right.second) + 1;
	int currentDiameter = left.second + right.second + 1;

	int maxDiameter = max(currentDiameter, max(left.first, right.first));
	return {maxDiameter, height};
}


