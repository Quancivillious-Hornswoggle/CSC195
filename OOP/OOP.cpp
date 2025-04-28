#include <iostream>
#include "Dog.h"
#include "Snake.h"

using namespace std;

int main()
{
    Animal animal(5);
    animal.Move();

	Dog dog(true);
	dog.Move();

	Animal* animalPtr = new Animal();
	(*animalPtr).Move();
	animalPtr->Move();

	Animal* dogPtr = new Dog(false);
	dogPtr->Move();

	cout << "Dog has " << dogPtr->GetLimbs() << " limbs." << endl;

	{
		Animal* animalPtr = new Animal;
	}

	Snake* snakePtr = new Snake(true);
	snakePtr->Move();
	snakePtr->Speak();
	cout << "Snake has " << snakePtr->GetLimbs() << " limbs." << endl;

	return 0;
}