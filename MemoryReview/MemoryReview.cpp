#include <iostream>

using namespace std;

struct Person
{
	char name[32];
	int id;
};

void Square(int& i)	
{
	i = i * i;
}

void Double(int* i)
{
	*i = *i * 2;
}

int main()
{
	int num = 8;				// declare an int variable and set the value to some number (less than 10)
	int& numRef = num;			// declare a int reference and set it to the int variable above
	cout << num << endl;        // output the int variable
	numRef = 5;                 // set the int reference to some number
	cout << num << endl;        // output the int variable

	// what happened to the int variable when the reference was changed? (V)
	// The data of the int variable was changed.
	
	cout << &num << endl;		// output the address of the int variable
	cout << &numRef << endl;	// output the address of the int reference

	// are the addresses the same or different? (Yes)
	
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter(i = i * i)

	Square(num);				// call the Square function with the int variable created in the REFERENCE section
	cout << num << endl;		// output the int variable to the console

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	int* pointer = nullptr;		// declare an int pointer, set it to nullptr (it points to nothing)
	pointer = &numRef;			// set the int pointer to the address of the int variable created in the REFERENCE section
	cout << pointer << endl;	// output the value of the pointer

	// what is this address that the pointer is pointing to? (the original num int)
	
	cout << *pointer << endl;	// output the value of the object the pointer is pointing to (dereference the pointer)
	
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	
	Double(pointer);			// call the Double function with the pointer created in the POINTER VARIABLE section
	cout << *pointer << endl;	// output the dereference pointer
	cout << num << endl;		// output the int variable created in the REFERENCE section

	// did the int variable's value change when using the pointer? (Yes)
}