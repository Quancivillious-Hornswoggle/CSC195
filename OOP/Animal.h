#pragma once

class Animal {
public:
	// Constructor
	Animal() {
		m_Limbs = 4;
		m_ptr = new int(25);
	}
	Animal(int amount) {
		m_Limbs = amount;
	}

	// Destructor
	~Animal() {
		delete m_ptr;
	}

	// Getters
	int GetLimbs() { return m_Limbs; }

	// Setters
	void SetLimbs(int limbs) { m_Limbs = limbs; }

	// Methods
	virtual void Move();
	virtual void Speak();

protected:
	int m_Limbs;

	int* m_ptr = nullptr;
};