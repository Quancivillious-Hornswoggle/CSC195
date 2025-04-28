#pragma once

#include "Animal.h"

class Snake : public Animal {
public:
	// Constructor
	Snake(bool hasVenom) {
		has_venom = hasVenom;
		m_Limbs = 0;
	}

	// Methods
	void Move() override;
	void Speak() override;

protected:
	bool has_venom;
};