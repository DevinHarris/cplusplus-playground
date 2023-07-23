#pragma once

#ifndef PRODUCEITEM_H
#define PRODUCEITEM_H

#include <string>
#include "GenericItem.h"

class ProduceItem : public GenericItem {

public:

	void SetExpiration(std::string newDate);

	std::string GetExpiration();

private:
	std::string expirationDate;
};
#endif // !PRODUCEITEM_H
