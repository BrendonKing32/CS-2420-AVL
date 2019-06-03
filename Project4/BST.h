//Name		:Brendon King
//Title		:BST.h
//Date		:6/2/2019
//Assignment:Project 4

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
	
	//Function	:newNode()
	//Purpose	:create a new node with information from file
	//Parameters:int key
	//Returns	:node newNode
	Node* newNode(int key);
	
	//Function	:max()
	//Purpose	:utility function to find max value
	//Parameters:int a, int b
	//Returns	:greater value
	int max(int a, int b);
	
	//Function	:min()
	//Purpose	:utility function to find min value
	//Parameters:int a, int b
	//Returns	:lesser value
	int min(int a, int b);
	
	//Function  :height()
	//Purpose   :calculate height of a certain node
	//Parameters:node* t
	//Returns   :none
	int height(Node* N);
	
	//Function	:rightRotate()
	//Purpose	:rotate tree according to AVL principles - right shift
	//Parameters:node* y
	//Returns	:node* y
	Node* rightRotate(Node* y);
	
	//Function	:leftRotate()
	//Purpose	:rotate tree according to AVL principles - left shift
	//Parameters:Node* x
	//Returns	:Node* x
	Node* leftRotate(Node * x);
	
	//Function	:getBalance()
	//Purpose	:get balance factor of given node
	//Parameters:Node* n
	//Returns	:int balance
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

