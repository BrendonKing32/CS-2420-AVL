#pragma once
struct Node {
	int key;
	Node* left;
	Node* right;
	int height;
};

class BST {
public:
	Node* root;
	
	//basic constructor method
	BST();
	
	//Function	:
	//Purpose	:
	//Parameters:
	//Returns	:
	Node* newNode(int key);
	
	//Function	:
	//Purpose	:
	//Parameters:
	//Returns	:
	int max(int a, int b);
	
	//Function	:
	//Purpose	:
	//Parameters:
	//Returns	:
	int min(int a, int b);
	
	//Function  :height()
	//Purpose   :calculate height of a certain node
	//Parameters:node* t
	//Returns   :none
	int height(Node* N);
	
	//Function	:
	//Purpose	:
	//Parameters:
	//Returns	:
	Node* rightRotate(Node* y);
	
	//Function	:
	//Purpose	:
	//Parameters:
	//Returns	:
	Node* leftRotate(Node * x);
	
	//Function	:
	//Purpose	:
	//Parameters:
	//Returns	:
	int getBalance(Node* n);

	//Function  :insert()
	//Purpose   :insert a node with given int properly into BST
	//Parameters:int x, Node pointer t
	//Returns   :Node* t
	Node* insert(Node* node, int key);
	
	//Function  :preorder()
	//Purpose   :print every node in the tree using preorder traversal
	//Parameters:Node t
	//Returns   :none
	void preorder(Node* root);
	
	//Function  :inorder()
	//Purpose   :print every node in the tree using inorder traversal (recursion)
	//Parameters:Node t
	//Returns   :none
	void inorder(Node* root);
	
	//Function  :postorder
	//Purpose   :print every node in the tree using postorder traversal
	//Parameters:Node t
	//Returns   :none
	void postorder(Node* root);
	
	//Function  :display()
	//Purpose   :print the different traversal types of the tree
	//Parameters:none
	//Returns   :none
	void display();
	
	//Default destructor method
	virtual ~BST();
};

