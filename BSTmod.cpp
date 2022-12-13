#include "BSTmod.h"

void BSTmod::deletenodes(BinarySearchTree* node)
{
	if (node == NULL) return;
	deletenodes(node->left);
	deletenodes(node->right);
	delete node;
	root = NULL;
}
void BSTmod::insert(string city,int item)
{
	BinarySearchTree* q = NULL;
	BinarySearchTree* p = root;

	while (p)
	{
		q = p;
		if (item == p->item)
		{
			throw std::exception("Duplicate Key !\n");
			return;
		}
		else if (item < p->item)
		{
			p = p->left;
		}
		else
		{
			p = p->right;
		}
	}
	BinarySearchTree* node = new BinarySearchTree(city,item);
	if (root == NULL)
	{
		root = node;
	}
	else if (item < q->item)
	{
		q->left = node;
	}
	else
	{
		q->right = node;
	}
}

void BSTmod::PreOrderTraversal(BinarySearchTree* root)
{
	if (root == NULL) return;
	cout << root->city << " ";
	PreOrderTraversal(root->left);
	PreOrderTraversal(root->right);
}
void BSTmod::InOrderTraversal(BinarySearchTree* root)
{
	if (root == NULL) return;
	InOrderTraversal(root->left);
	cout << root->city << " -> ";
	InOrderTraversal(root->right);
}
void BSTmod::PostOrderTraversal(BinarySearchTree* root)
{
	if (root == NULL) return;
	PostOrderTraversal(root->left);
	PostOrderTraversal(root->right);
	cout << root->city << " ";
}

void BSTmod::PreOrder()
{
	PreOrderTraversal(root);
	cout << endl << endl;
}
void BSTmod::InOrder()
{
	InOrderTraversal(root);
	cout << endl << endl;
}
void BSTmod::PostOrder()
{
	PostOrderTraversal(root);
	cout << endl << endl;
}




