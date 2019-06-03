#include "BST.h"
#include <iostream>
using namespace std;

BST::BST()
{
	Node* root = nullptr;
}

Node * BST::newNode(int key)
{
	Node* node = new Node();
	node->key = key;
	node->left = nullptr;
	node->right = nullptr;
	node->height = 1;
	return node;
}

int BST::max(int a, int b)
{
	return (a > b) ? a : b;
}

int BST::min(int a, int b)
{
	return (a < b) ? a : b;
}

int BST::height(Node* n)
{
	return 0;
}

Node* BST::rightRotate(Node* y)
{
	Node *x = y->left;
	Node *T2 = x->right;

	// Perform rotation  
	x->right = y;
	y->left = T2;

	// Update heights  
	y->height = max(height(y->left),
		height(y->right)) + 1;
	x->height = max(height(x->left),
		height(x->right)) + 1;

	// Return new root  
	return x;
}

Node * BST::leftRotate(Node * x)
{
	Node *y = x->right;
	Node *T2 = y->left;

	// Perform rotation  
	y->left = x;
	x->right = T2;

	// Update heights  
	x->height = max(height(x->left),
		height(x->right)) + 1;
	y->height = max(height(y->left),
		height(y->right)) + 1;

	// Return new root  
	return y;
}

int BST::getBalance(Node * n)
{
	if (n == nullptr) {
		return 0;
	}
	return height(n->left) - height(n->right);
}

Node* BST::insert(Node * node, int key)
{
	//Normal insertion
	if (node == nullptr) {
		return(newNode(key));
	}

	if (key < node->key) {
		node->left = insert(node->left, key);
	}
	else if (key > node->key) {
		node->right = insert(node->right, key);
	}
	else {
		return node;
	}

	//Update height
	node->height = 1 + max(height(node->left), height(node->right));

	//Get Balance Factor
	int balance = getBalance(node); 

	// Left Left Case  
	if (balance > 1 && key < node->left->key) {
		return rightRotate(node);
	}

	// Right Right Case  
	if (balance < -1 && key > node->right->key) {
		return leftRotate(node);
	}

	// Left Right Case  
	if (balance > 1 && key > node->left->key) {
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}

	// Right Left Case  
	if (balance < -1 && key < node->right->key) {
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}

	/* return the (unchanged) node pointer */
	return node;
}

void BST::preorder(Node * root)
{
	if (root == nullptr) {
		return;
	}
	cout << root->key << " ";
	preorder(root->left);
	preorder(root->right);
}

void BST::inorder(Node * root)
{
	if (root == nullptr) {
		return;
	}
	inorder(root->left);
	cout << root->key << " ";
	inorder(root->right);
}

void BST::postorder(Node * root)
{
	if (root == nullptr) {
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->key << " ";
}

void BST::display()
{
	cout << "\nInorder traversal" << endl;
	inorder(root);
	cout << "\n\nPreorder traversal" << endl;
	preorder(root);
	cout << "\n\nPostorder traversal" << endl;
	postorder(root);
	cout << endl;
}


BST::~BST()
{
}
