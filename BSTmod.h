#pragma once
#include<string>
#include<iostream>

using namespace std;

struct BinarySearchTree {
	int item;
	string city;
	BinarySearchTree* left, * right;
	BinarySearchTree(string city,int item)
	{
		this->item = item;
		this->city = city;
		left = NULL;
		right = NULL;
	}
};
class BSTmod
{
	BinarySearchTree* root;
	void deletenodes(BinarySearchTree* root);
	void PreOrderTraversal(BinarySearchTree* node);
	void InOrderTraversal(BinarySearchTree* node);
	void PostOrderTraversal(BinarySearchTree* node);
public:
	BSTmod() { root = NULL; }
	~BSTmod() { deletenodes(root); }
	void insert(string city,int item);
	void PreOrder();
	void InOrder();
	void PostOrder();
};

