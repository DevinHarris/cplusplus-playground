#include <iostream>
#include <string>

using namespace std;

#include "GenericItem.h"

void GenericItem::SetName(string newName) {
	itemName = newName;
}

void GenericItem::SetQuantity(int newQuantity) {
	itemQty = newQuantity;
}

void GenericItem::PrintItem() {
	cout << itemName << " " << itemQty << endl;
}