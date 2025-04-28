#pragma once
#include <iostream>
#include <string>
#include "BaseClass.h"

class Cat : public BaseClass
{
	int livesLeft;

public:
	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	eType GetType() override { return eType::CAT; }
};