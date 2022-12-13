#pragma once
#include<string>
#include<iostream>

using namespace std;

struct BinarySearchTree {
	int item;
	BinarySearchTree* left, * right;
	BinarySearchTree(int item)
	{
		this->item = item;
		left = NULL;
		right = NULL;
	}
};

class BST
{
	BinarySearchTree* root;
	void deletenodes(BinarySearchTree* root	);
	void PreOrderTraversal(BinarySearchTree* node);
	void InOrderTraversal(BinarySearchTree* node);
	void PostOrderTraversal(BinarySearchTree* node);
public:
	BST() { root = NULL; }
	~BST() { deletenodes(root);}
	void insert(int item);
	void PreOrder();
	void InOrder();
	void PostOrder();
};

