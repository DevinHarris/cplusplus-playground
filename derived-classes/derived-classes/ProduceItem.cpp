#include <iostream>
#include <string>
using namespace std;

#include "ProduceItem.h"

void ProduceItem::SetExpiration(string newDate) {
	expirationDate = newDate;
}

string ProduceItem::GetExpiration() {
	return expirationDate;
}