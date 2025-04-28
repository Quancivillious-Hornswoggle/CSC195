#pragma once
#include "BaseClass.h"
#include <vector>

class Database
{
	std::vector<BaseClass*> objects;

public:
	~Database(); // Destructor
	void Create(BaseClass::eType type);
	void DisplayAll();
	void Display(const std::string& name);
	void Display(BaseClass::eType type);
};