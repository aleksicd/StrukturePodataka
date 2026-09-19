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

	int zbir = tree.saberiSve(6, 15);
	tree.inorder();
	cout << endl;
	cout << "Zbir: " << zbir << endl;
}
