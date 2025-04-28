#pragma once
#include <iostream>
#include <string>

class BaseClass
{
	// Member variables
	std::string name;
	int age;

public:
	// Enum for object types
	enum class eType
	{
		CAT,
		DOG
	};

	// Methods
	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);
	std::string GetName() { return name;  };
	int GetAge() { return age; };
	virtual eType GetType() = 0;
};