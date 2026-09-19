#include "BSTreeInt.h"

void main()
{
	//TODO: Proveriti rad implementiranog metoda za različite slučajeve izvršenja 
	BSTreeInt tree;
	tree.insert(10);
	tree.insert(5);
	tree.insert(15);
	tree.insert(3);
	tree.insert(7);
	tree.insert(12);
	tree.insert(18);

	BSTNodeInt* n1 = tree.search(5);
	BSTNodeInt* n2 = tree.search(15);

	if (n1 != nullptr && n2 != nullptr)
	{
		int tmp = n1->key;
		n1->key = n2->key;
		n2->key = tmp;
	}

	cout << "Pokvareno stablo:" << endl;
	tree.inorder();
	cout << endl;

	tree.zameni();

	cout << "Popravljeno stablo:" << endl;
	tree.inorder();
	cout << endl;
}
