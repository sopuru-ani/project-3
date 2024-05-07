#include "binary.h"
#include <iostream>
using namespace std;

Binary::Binary() {
	root = nullptr;
}
void Binary::insert(int n) {
	insertNode(n, root);
}
void Binary::dO() {
	cout << "In-Order: ";
	displayInOrder(root);
	cout << endl;
	cout << "Pre-Order: ";
	displayPreOrder(root);
	cout << endl;
	cout << "Post-Order: ";
	displayPostOrder(root);
}
void Binary::insertNode(int n, TreeNode*& root) {
	TreeNode* newNode = nullptr;
	newNode = new TreeNode;
	newNode->value = n;
	newNode->left = nullptr;
	newNode->right = nullptr;
	if (root == nullptr)
		root = newNode;
	else if (n <= root->value)
		insertNode(n, root->left);
	else if (n > root->value)
		insertNode(n, root->right);
}
void Binary::displayInOrder(TreeNode* root)const {
	if (root) {
		displayInOrder(root->left);
		cout << root->value << " ";
		displayInOrder(root->right);
	}
}
void Binary::displayPreOrder(TreeNode* root)const {
	if (root) {
		cout << root->value << " ";
		displayInOrder(root->left);
		displayInOrder(root->right);
	}
}
void Binary::displayPostOrder(TreeNode* root)const {
	if (root) {
		displayInOrder(root->left);
		displayInOrder(root->right);
		cout << root->value << " ";
	}
}

void Binary::deleteNode(TreeNode*& root) {
	if (root == nullptr) {
		return;
	}
	deleteNode(root->left);
	deleteNode(root->right);
	delete root;
}

Binary::~Binary() {
	deleteNode(root);
}