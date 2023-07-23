#pragma once
#ifndef GENERICITEM_H
#define GENERICITEM_H

#include <string>

class GenericItem {
public:
	void SetName(std::string newName);
	void SetQuantity(int newQuantity);
	void PrintItem();

private:
	std::string itemName;
	int itemQty;
};

#endif // !GENERICITEM_H
