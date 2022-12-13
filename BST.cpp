#include "BST.h"
void BST::deletenodes(BinarySearchTree* node)
{
	if (node == NULL) return;
	deletenodes(node->left);
	deletenodes(node->right);
	delete node;
	root = NULL;
}
void BST::insert(int item)
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
	BinarySearchTree* node = new BinarySearchTree(item);
	if (root==NULL)
	{
		root = node;
	}
	else if (item<q->item)
	{
		q->left = node;
	}
	else
	{
		q->right = node;
	}
}

void BST :: PreOrderTraversal(BinarySearchTree* root)
{
	if (root == NULL) return;
	cout << root->item << " ";
	PreOrderTraversal(root->left);
	PreOrderTraversal(root->right);
}
void BST:: InOrderTraversal(BinarySearchTree* root)
{
	if (root == NULL) return;
	InOrderTraversal(root->left);
	cout << root->item << " ";
	InOrderTraversal(root->right);
}
void BST::PostOrderTraversal(BinarySearchTree* root)
{
	if (root == NULL) return;
	PostOrderTraversal(root->left);
	PostOrderTraversal(root->right);
	cout << root->item << " ";
}

void BST:: PreOrder()
{
	cout << "Preorder Traversal option 1: ";
	PreOrderTraversal(root);
}
void BST:: InOrder()
{
	cout << "Ineorder Traversal option 1: ";
	InOrderTraversal(root);
}
void BST:: PostOrder()
{
	cout << "Postorder Traversal option 1: ";
	PostOrderTraversal(root);
}