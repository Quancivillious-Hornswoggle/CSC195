#include "Dog.h"

void Dog::Read(std::ostream& ostream, std::istream& istream)
{
	BaseClass::Read(ostream, istream);
	ostream << "Is the dog trained? (1 for yes, 0 for no): ";
	istream >> isTrained;
}

void Dog::Write(std::ostream& ostream)
{
	BaseClass::Write(ostream);
	ostream << "Is the dog trained? " << (isTrained ? "Yes" : "No") << std::endl;
}