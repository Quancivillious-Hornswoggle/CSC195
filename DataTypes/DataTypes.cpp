#include <iostream>
using namespace std;

#pragma region Variables

const float TAX = 0.1f; // 10% tax rate

string name;
char initial;
short int age;
bool isAdult;
unsigned int zipcode;
float wage;
short int daysWorked;
float hoursWorkedPerDay[7];

#pragma endregion

int main() {
	#pragma region Get User Input
	cout << "Enter first name: ";
	cin >> name;

	cout << "Enter initial of last name: ";
	cin >> initial;

	cout << "Enter age: ";
	cin >> age;
	isAdult = (age >= 18);  // Determine adulthood status

	cout << "Enter zipcode: ";
	cin >> zipcode;

	cout << "Enter hourly wage: ";
	cin >> wage;

	cout << "Enter number of days worked (max 7): ";
	cin >> daysWorked;
	#pragma endregion
	//---------------------------------------------------------------------------------------
	#pragma region Collect Hours Worked Per Day
	float totalHours = 0; // Initialize total hours to 0

	for (int i = 0; i < daysWorked; i++) {
		cout << "Enter hours worked for day " << (i + 1) << ": ";
		cin >> hoursWorkedPerDay[i];

		totalHours += hoursWorkedPerDay[i];  // Accumulate total hours
	}
	#pragma endregion
	//---------------------------------------------------------------------------------------
	#pragma region Calculate Payroll
	float grossIncome = totalHours * wage;
	float taxAmount = grossIncome * TAX;
	float netIncome = grossIncome - taxAmount;
	#pragma endregion
	//---------------------------------------------------------------------------------------
	#pragma region Display Payroll Information
	cout << "\nEmployee Payroll Summary\n";
	cout << "-------------------------\n";
	cout << "Name: " << name << " " << initial << ".\n";
	cout << "Age: " << age << " (Adult: " << (isAdult ? "Yes" : "No") << ")\n";
	cout << "Zipcode: " << zipcode << "\n";
	cout << "Hourly Wage: $" << wage << " per hour\n";
	cout << "Total Hours Worked: " << totalHours << " hours\n";
	cout << "Gross Income: $" << grossIncome << "\n";
	cout << "Tax Amount: $" << taxAmount << "\n";
	cout << "Net Income: $" << netIncome << "\n";
	#pragma endregion

	return 0;
}