#include <iostream>
#include <string>
using namespace std;

#include "ProduceItem.h"

int main() {

	GenericItem miscItem;
	ProduceItem perishItem;

	miscItem.SetName("Cinnamon Toast Crunch");
	miscItem.SetQuantity(24);
	miscItem.PrintItem();

	perishItem.SetName("Apples");
	perishItem.SetQuantity(40);
	perishItem.SetExpiration("Dec 5, 2024");
	perishItem.PrintItem();

	cout << " (Expires: " << perishItem.GetExpiration() << ")" << endl;

	return 0;
}