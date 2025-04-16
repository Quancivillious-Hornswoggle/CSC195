#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>

using namespace std;

// Containers
array<string, 7> daysOfWeek = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
vector<int> numbers = { 1, 2, 3, 4, 5};
list<string> fruits = { "Apple", "Banana", "Orange"};
map<string, int> store = { {"Apple", 10}, {"Banana", 5}, {"Orange", 1000000} };

bool HandleArray() {
	// Go through the array and print each day of the week
	for (int i = 0; i < daysOfWeek.size(); i++)
	{
		cout << daysOfWeek[i] << endl;
	}

	return true;
}

bool HandleVector() {
	// Add numbers to vector container
	numbers.push_back(6);
	numbers.push_back(7);
	numbers.pop_back();

	// Go through the vector and print each number
	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << endl;
	}

	return true;
}

bool HandleList() {
	// Add fruits to list container
	fruits.push_front("Strawberry");
	fruits.push_back("Grapes");

	// Remove a fruit
	fruits.remove("Banana");

	// Go through the list and print each fruit
	for (std::string fruit : fruits)
	{
		cout << fruit << endl;
	}

	return true;
}

bool HandleMap() {
	// Add items to map container
	store["Strawberry"] = 20;
	store["Grapes"] = 15;
	store["Dragon Fruit"] = 5;

	// Update a key
	store["Apple"] = 13;

	// Go through the map and print each item
	for (auto it = store.begin(); it != store.end(); ++it)
	{
		cout << it->first << ": " << it->second << endl;
	}

	return true;
}

int main()
{
	cout << "------------------------------------------" << endl;
	cout << endl;

	HandleArray();

	cout << endl;
	cout << "------------------------------------------" << endl;
	cout << endl;

	HandleVector();

	cout << endl;
	cout << "------------------------------------------" << endl;
	cout << endl;

	HandleList();

	cout << endl;
	cout << "------------------------------------------" << endl;
	cout << endl;

	HandleMap();

	cout << endl;
	cout << "------------------------------------------" << endl;
}