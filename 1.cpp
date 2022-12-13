#include"BST.h"

int main()
{
	int opinion,item;
	BST b;
	do
	{
		cout << "1.Inset Elements" << endl;
		cout << "2.Preorder" << endl;
		cout << "3.Inorder" << endl;
		cout << "4.Postorder" << endl;
		cout << "5.Exit" << endl;

		do
		{
			cout << "Enter Your Choise:";
			cin >> opinion;
			if (opinion > 5)
			{
				cout << endl << endl << "------PLEASE ENTER A VALUE BETWEEN 0 AND 7-----" << endl << endl;
			}
			else
			{
				break;
			}
		} while (1);

		switch (opinion)
		{
		case 1:
		{
			cout << endl << "Enter the Value:";
			cin >> item;
			cout << endl;
			b.insert(item);
			break;
		}

		case 2:
		{
			b.PreOrder();
			cout << endl;
			break;
		}

		case 3:
		{
			b.InOrder();
			cout << endl;
			break;
		}
		case 4:
		{
			b.PostOrder();
			cout << endl;
			break;
		}
		default:
			break;
		}
	} while (opinion!=5);
		
	
}