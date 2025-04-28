#include "Cat.h"

void Cat::Read(std::ostream& ostream, std::istream& istream)
{
	BaseClass::Read(ostream, istream);
	ostream << "Enter the number of lives left: ";
	istream >> livesLeft;
}

void Cat::Write(std::ostream& ostream)
{
	BaseClass::Write(ostream);
	ostream << "Number of lives left: " << livesLeft << std::endl;
}