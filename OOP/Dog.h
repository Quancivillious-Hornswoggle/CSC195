#pragma once
#include "Animal.h"

class Dog : public Animal {
public:
	// Constructor
	Dog(bool isServiceAnimal) {
		is_service_animal = isServiceAnimal;
		m_Limbs = 4;
	}

	void Move() override;
	void Speak() override;

protected:
	bool is_service_animal;
};
