#include"BSTmod.h"


int main()
{
	BSTmod b,b2;

	b.insert("Bucharest", 5);
	b.insert("Pitesti", 3);
	b.insert("Rimnicu-Vilcea", 2);
	b.insert("Sibiu", 4);
	b.insert("Fagaras", 7);
	b.insert("Urziceni", 6);
	b.insert("Vaslui", 8);

	b.InOrder();

	b2.insert("Bucharest", 5);
	b2.insert("Fagaras", 7);
	b2.insert("Vaslui", 8);
	b2.insert("Neamt", 9);

	b2.InOrder();
}